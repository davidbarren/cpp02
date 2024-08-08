/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 15:05:44 by dbarrene          #+#    #+#             */
/*   Updated: 2024/08/08 23:46:34 by dbarrene         ###   ########.fr       */
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
		Point(const Point &other);
	private:
		Point& operator=(const Point &other);
		const Fixed x;
		const Fixed y;
		// maybe add more things??
};
bool bsp(Point const a, Point const b, Point const c, Point const point);
#endif
