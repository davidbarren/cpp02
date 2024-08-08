/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 15:22:47 by dbarrene          #+#    #+#             */
/*   Updated: 2024/08/09 00:34:23 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Point.hpp"

Fixed find_area(Point const a, Point const b, Point const c)
{
	Fixed ax (a.get_x() * (b.get_y() - c.get_y()));
	Fixed bx (b.get_x() * (c.get_y() - a.get_y()));
	Fixed cx (c.get_x() * (a.get_y() - b.get_y()));
	Fixed rv ((ax + bx + cx));
	if (rv < 0)
		rv = rv * -1;
	return (rv);
}
bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	// returns false is the point is on an edge or vertex
	Fixed tri_area = find_area(a,b,c); // find area of triangle
	Fixed pt_ar;
	std::cout << "area of triangle: " << find_area(a,b,c) << std::endl;
	if (find_area(a,b,point) == 0)
		return 0;
	if (find_area(a,c,point) == 0)
		return 0;
	if (find_area(b,c,point) == 0)
		return 0;
	pt_ar = pt_ar + find_area(a,b,point); 
	pt_ar = pt_ar + find_area(b,c,point);
	pt_ar = pt_ar + find_area(a,c,point);
	if (pt_ar != tri_area)
		return 0;
	// find "area" of triangle replacing each vertex with point to be checked
	// if point is inside triangle then sum of all 3 "areas" equals true area
	// if point is on vertex/edge then one of the "areas" is 0
	return 1;
}


