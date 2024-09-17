/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 18:37:14 by kmatjuhi          #+#    #+#             */
/*   Updated: 2024/09/17 12:23:49 by kmatjuhi         ###   ########.fr       */
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

Fixed::Fixed( void ) : _value(0) {}

Fixed::Fixed( const int value ) {
	this->_value = value * powerOf(2, kFractionBits);
}

Fixed::Fixed( const float value ) {
	this->_value = roundf(value * powerOf(2, kFractionBits));
}


Fixed::~Fixed( void ) {}

Fixed::Fixed(const Fixed &other) : _value(other._value) {}

Fixed &Fixed::operator=(const Fixed &other) {
	if (this != &other)
		this->_value = other._value;
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

bool Fixed::operator>( Fixed rhs ) const {
	return (this->toFloat() > rhs.toFloat());
}

bool Fixed::operator<( Fixed rhs ) const {
	return (this->toFloat() < rhs.toFloat());
}

bool Fixed::operator>=( Fixed rhs ) const {
	return (this->toFloat() >= rhs.toFloat());
}

bool Fixed::operator<=( Fixed rhs ) const {
	return (this->toFloat() <= rhs.toFloat());
}

bool Fixed::operator==( Fixed rhs ) const {
	return (this->toFloat() == rhs.toFloat());
}

bool Fixed::operator!=( Fixed rhs ) const {
	return (this->toFloat() != rhs.toFloat());
}

float Fixed::operator+( Fixed rhs ) const {
	return (this->toFloat() + rhs.toFloat());
}

float Fixed::operator-( Fixed rhs ) const {
	return (this->toFloat() - rhs.toFloat());
}

float Fixed::operator*( Fixed rhs ) const {
	return (this->toFloat() * rhs.toFloat());
}

float Fixed::operator/( Fixed rhs ) const {
	return (this->toFloat() / rhs.toFloat());
}

Fixed Fixed::operator++() {
	this->_value++;
	return (*this);
}

Fixed Fixed::operator--() {
	this->_value--;
	return (*this);
}

Fixed Fixed::operator++( int ) {
	Fixed tmp = *this;
	++this->_value;
	return (tmp);
}

Fixed Fixed::operator--( int ) {
	Fixed tmp = *this;
	--this->_value;
	return (tmp);
}

Fixed &Fixed::min( Fixed &lhs, Fixed &rhs ) {
	return (lhs.toFloat() <= rhs.toFloat()) ? lhs : rhs;
}

Fixed &Fixed::max( Fixed &lhs, Fixed &rhs ) {
	return (lhs.toFloat() >= rhs.toFloat()) ? lhs : rhs;
}

const Fixed &Fixed::min( const Fixed &lhs, const Fixed &rhs ) {
	return (lhs.toFloat() <= rhs.toFloat()) ? lhs : rhs;
}

const Fixed &Fixed::max( const Fixed &lhs, const Fixed &rhs ) {
	return (lhs.toFloat() >= rhs.toFloat()) ? lhs : rhs;
}
