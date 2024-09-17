/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 18:37:14 by kmatjuhi          #+#    #+#             */
/*   Updated: 2024/09/17 11:12:00 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

static int powerOf( int base, int exponent ) {
	int result = 1;

	for (int i = 0; i < exponent; i++) {
		result *= base;
	}
	return (result);
}

const int Fixed::kFractionBits = 8;

Fixed::Fixed( void ) : _value(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const int value ) {
	this->_value = value * powerOf(2, kFractionBits);
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed( const float value ) {
	this->_value = roundf(value * powerOf(2, kFractionBits));
	std::cout << "Float constructor called" << std::endl;
}


Fixed::~Fixed( void ) {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other) : _value(other._value) {
	std::cout << "Copy constructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &other) {
	if (this != &other) {
		this->_value = other._value;
		std::cout << "Copy assignment operator called" << std::endl;
	}
	return (*this);
}

float Fixed::toFloat( void ) const {
	float num = (float)this->_value / powerOf(2, kFractionBits);
	return (num);
}

int Fixed::toInt( void ) const {
	float num = this->_value / powerOf(2, kFractionBits);
	return (num);
}

int Fixed::getRawBits( void ) const {
	return (this->_value);
}

void Fixed::setRawBits( int const raw ) {
	this->_value = raw;
}

std::ostream &operator<<(std::ostream &os, const Fixed &value) {
	os << value.toFloat();
	return (os);
}
