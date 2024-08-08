/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 15:22:47 by dbarrene          #+#    #+#             */
/*   Updated: 2024/08/08 19:22:13 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Point.hpp"

Fixed find_area(Point const a, Point const b, Point const c)
{
	Fixed rv;
//	float area;
//	Fixed div(2.0f);
	rv = a.get_x()*(b.get_y() - c.get_y()) + b.get_x()*(c.get_y() - a.get_y())
			+ c.get_x() * (a.get_y() - b.get_y()); // needs to be divided by 2
//	rv = rv / div;
	std::cout << "float representation:" << rv.toFloat() << std::endl;
	return (rv);
}
bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	// where a b c are vertices of triangle
	// point is the point to check
	// returns false is the point is on an edge or vertex	
	std::cout << "coordinates for point a:   x: " << a.get_x() << " y:" << a.get_y() << std::endl;
	std::cout << "coordinates for point b:   x: " << b.get_x() << " y:" << b.get_y() << std::endl;
	std::cout << "coordinates for point c:   x: " << c.get_x() << " y:" << c.get_y() << std::endl;
	std::cout << "coords for point to check:   x: " << point.get_x() << " y:" << point.get_y() << std::endl;
	std::cout << "area of triangle: " << find_area(a,b,c) << std::endl;
	return (0);
}


