/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 18:35:51 by kmatjuhi          #+#    #+#             */
/*   Updated: 2024/09/16 23:27:33 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
	private:
		static const int	kFractionBits;
		int					_value;
	public:
		Fixed( void );
		~Fixed( void ); 	
		Fixed(const Fixed &src);
		Fixed& operator=(const Fixed& src);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
};

#endif