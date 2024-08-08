/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 15:08:39 by dbarrene          #+#    #+#             */
/*   Updated: 2024/08/08 15:44:17 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Point.hpp"

Point::Point() : x(0), y(0){
};

Point::Point(const Fixed ix, const Fixed iy): x(ix), y(iy){
};
Point::~Point(){
};
Point &Point::operator=(const Point &other){
	Point newret(other.x, other.y);
	*this = newret;
	return (*this);
}

const Fixed Point::get_x() const{
	return (this->x);
}

const Fixed Point::get_y() const{
	return (this->y);
}
