/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 15:40:26 by kmatjuhi          #+#    #+#             */
/*   Updated: 2025/01/20 11:53:10 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename T> void swap(T &first, T &second) {
	T temp = first;
	first = second;
	second = temp;
}

template <typename T> T min(T &first, T &second) {
	return (first < second) ? first : second; 
}

template <typename T> T max(T &first, T &second) {
	return (first > second) ? first : second; 
}
