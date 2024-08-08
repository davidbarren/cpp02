/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 16:56:53 by dbarrene          #+#    #+#             */
/*   Updated: 2024/08/08 19:07:16 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"
#include "../includes/Point.hpp"

int	main(void)
{
	Point a(1.2f,2.2f);
	Point b(3.4f,1.7f);
	Point c(6.9f,4.2f);
	Point p(42.1f,30.1f);
	Point x(5.4f, 3.2f);
	bsp(a,b,c,x);
	return 0;
}
