/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 15:05:44 by dbarrene          #+#    #+#             */
/*   Updated: 2024/08/08 15:43:32 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef POINT_HPP
# define POINT_HPP
#include "Fixed.hpp"

class Point{
	private:
		const Fixed x;
		const Fixed y;
		// maybe add more things??
	public:
		Point();
		Point(const Fixed ix, const Fixed iy);
		Point(const Point &other);
		~Point();
		Point& operator=(const Point &other);
		const Fixed get_x() const;
		const Fixed get_y() const;
};
#endif
