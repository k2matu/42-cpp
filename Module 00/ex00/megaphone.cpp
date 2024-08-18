/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 23:14:34 by kmatjuhi          #+#    #+#             */
/*   Updated: 2024/08/18 23:23:13 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main(int argc, char *argv[])
{
	for (int i = 1; i <= argc; i++)
	{
		for (int j = 0; argv[i][j]; j++)
		{
			std::cout << toupper(argv[i][j]);
		}
	}
	return (0);
}
