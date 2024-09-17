/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 18:35:51 by kmatjuhi          #+#    #+#             */
/*   Updated: 2024/09/17 10:52:08 by kmatjuhi         ###   ########.fr       */
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
};

std::ostream &operator<<(std::ostream &os, const Fixed &value);

#endif