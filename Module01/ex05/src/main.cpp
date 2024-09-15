/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 13:13:41 by kmatjuhi          #+#    #+#             */
/*   Updated: 2024/09/15 14:40:22 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main( void ) {
	Harl harl1;

	harl1.complain("DEBUG");
	harl1.complain("INFO");
	harl1.complain("WARNING");
	harl1.complain("ERROR");
	return (0);
}
