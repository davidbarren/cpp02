/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 15:05:44 by dbarrene          #+#    #+#             */
/*   Updated: 2024/08/08 18:28:31 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef POINT_HPP
# define POINT_HPP
#include "Fixed.hpp"

class Point{
	public:
		Point();
		Point(const float ix, const float iy);
		~Point();
		const Fixed get_x() const;
		const Fixed get_y() const;
	private:
		const Fixed x;
		const Fixed y;
		Point& operator=(const Point &other);
//		Point(const Point &other);
		// maybe add more things??
};
bool bsp(Point const a, Point const b, Point const c, Point const point);
#endif
