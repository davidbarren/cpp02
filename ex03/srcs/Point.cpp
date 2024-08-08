/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 15:08:39 by dbarrene          #+#    #+#             */
/*   Updated: 2024/08/08 18:23:36 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Point.hpp"
#include "../includes/Fixed.hpp"

Point::Point() : x(0), y(0){
};

Point::Point(const float ix, const float iy): x(ix), y(iy){
};
Point::~Point(){
};
const Fixed Point::get_x() const{
	return (this->x);
}

const Fixed Point::get_y() const{
	return (this->y);
}
