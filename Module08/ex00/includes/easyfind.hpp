/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 15:40:26 by kmatjuhi          #+#    #+#             */
/*   Updated: 2025/01/21 10:23:54 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <algorithm>

template <typename Container>  
int easyfind(const Container &c, int i) {
	auto it = find(c.begin(), c.end(), i);

	if (it != c.end()) {
		return std::distance(c.begin(), it);
	}
	return (-1);
}

