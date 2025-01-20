/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 15:40:26 by kmatjuhi          #+#    #+#             */
/*   Updated: 2025/01/20 14:59:30 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename T> 
class Array {
	private:
		T *_arr;
		unsigned int _size;
	public:	
		Array() : _size(0), _arr(nullptr) {
			std::cout << "Default constructor created empty array" << std::endl;
		}
		
		Array(unsigned int n) : _size(n) {
			std::cout << "Default constructor created an array of size " << this->_size << std::endl;
			if (n == 0)
				this->_arr = nullptr;
			else
				this->_arr = new T[this->_size];
		}
		
		~Array() {
			delete[] this->_arr;
		}
		
		Array( const Array &src ) : _arr(nullptr), _size(src._size) {
			if (src._size > 0) {
				this->_arr = new T[this->_size];
				for (unsigned int i = 0; i < _size; i++) {
					this->_arr[i] = src._arr[i];
				}
			}
			std::cout << "Copy constructor created " << std::endl;
		}
		
		Array &operator=( const Array &rhs ) {
			if (this != &rhs) {
				delete[] _arr;
				this->_size = rhs._size;
				if (this->_size > 0) {
					this->_arr = new T[this->_size];
					for (unsigned int i = 0; i < this->_size; i++) {
						this->_arr[i] = rhs._arr[i];
					}
				} else {
					this->_arr = nullptr;
				}
			}
			return (*this);
		}
		
		unsigned int size() {
			return (this->_size);
		}
		
		T &operator[]( unsigned int index )
		{
			if (index >= this->_size) {
				throw Array<T>::InvalidIndexException(index, this->_size);
			}
			return (this->_arr[index]);
		}

		class InvalidIndexException : public std::exception {
			private:
				std::string _message;
			public:
				InvalidIndexException(unsigned int index, unsigned int size) {
					_message = "Invalid index: " + std::to_string(index) +
							" (array size: " + std::to_string(size) + ")";
				}

				virtual const char *what() const throw() {
					return _message.c_str();
				}
			};
};
