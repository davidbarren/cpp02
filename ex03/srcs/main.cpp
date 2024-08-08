/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 16:56:53 by dbarrene          #+#    #+#             */
/*   Updated: 2024/08/09 00:35:41 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"
#include "../includes/Point.hpp"

int	main(void)
{
	// vertices of triangle
	Point a(2.0f, 0);
	Point b(0,0);
	Point c(2.0f, 1.0f);
	// points to check;
	Point p(1, 0);
	Point x(1.2f, 0.4f);
	std::cout << "result of bsp: " << bsp(a,b,c,c) << std::endl;
	std::cout << "result of bsp: " << bsp(a,b,c,p) << std::endl;
	std::cout << "result of bsp: " << bsp(a,b,c,x) << std::endl;
	return 0;
}
