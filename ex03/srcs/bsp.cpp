/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 15:22:47 by dbarrene          #+#    #+#             */
/*   Updated: 2024/08/09 15:50:19 by dbarrene         ###   ########.fr       */
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
	Fixed tri_area = find_area(a,b,c); 
	Fixed pt_ar;
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
	return 1;
}


