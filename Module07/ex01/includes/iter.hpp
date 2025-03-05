/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 15:40:26 by kmatjuhi          #+#    #+#             */
/*   Updated: 2025/01/20 11:19:28 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

template <typename T> 
void plusOne(T &i) {
	i++;
}

template <typename T> 
void iter(T *arr, size_t arr_len, void (*f)(T &)) {
	if (!arr || !f)
		return ;
	
	for (size_t i = 0; i < arr_len; i++) {
		f(arr[i]);
	};
};