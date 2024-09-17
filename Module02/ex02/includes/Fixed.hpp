/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 18:35:51 by kmatjuhi          #+#    #+#             */
/*   Updated: 2024/09/17 12:24:26 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
	private:
		static const int	kFractionBits;
		int					_value;
	public:
		Fixed( void );
		Fixed( const int value );
		Fixed( const float value );
		~Fixed( void ); 	
		Fixed(const Fixed &src);
		Fixed &operator=(const Fixed &src);

		float toFloat( void ) const;
		int toInt( void ) const;

		int getRawBits( void ) const;
		void setRawBits( int const raw );

		bool operator>( Fixed rhs ) const;
		bool operator<( Fixed rhs ) const;
		bool operator>=( Fixed rhs ) const;
		bool operator<=( Fixed rhs ) const;
		bool operator==( Fixed rhs ) const;
		bool operator!=( Fixed rhs ) const;

		float operator+( Fixed rhs ) const;
		float operator-( Fixed rhs ) const;
		float operator*( Fixed rhs ) const;
		float operator/( Fixed rhs ) const;

		Fixed operator++();
		Fixed operator--();
		Fixed operator++( int );
		Fixed operator--( int );
		
		static Fixed &min( Fixed &lhs, Fixed &rhs );
		static Fixed &max( Fixed &lhs, Fixed &rhs );
		static const Fixed &min( const Fixed &lhs, const Fixed &rhs );
		static const Fixed &max( const Fixed &lhs, const Fixed &rhs );
};

std::ostream &operator<<(std::ostream &os, const Fixed &value);

#endif