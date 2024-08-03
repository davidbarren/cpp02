/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 16:56:53 by dbarrene          #+#    #+#             */
/*   Updated: 2024/08/03 18:18:06 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

int	main(void)
{
	Fixed a;
	Fixed  b( 10 );
	Fixed const c( 42.42f );
	Fixed const d( b );
	Fixed e;
	a = Fixed( 1234.4321f );
	std::cout << std::endl << "Overloaded arithmetic operators" << std::endl; 
	std::cout << "result of addition: " << a+b << std::endl;
	std::cout << "value of a: " << a << std::endl;
	std::cout << "result of subtraction: " << a-b << std::endl;
	std::cout << "value of a: " << a << std::endl;
	std::cout << "result of multiplication: " << a*b << std::endl;
	std::cout << "value of a: " << a << std::endl;
	std::cout << "result of division: " << a/b << std::endl;
	std::cout << "value of a: " << a << std::endl;
	
	std::cout << std::endl << "Overloaded comparison operators" << std::endl;
	std::cout << "comparing a > b : " << (a > b) << std::endl;
	std::cout << "comparing a < b : " << (a < b) << std::endl;
	std::cout << "comparing a >= b : " << (a >= b) << std::endl;
	std::cout << "comparing b >= b : " << (b >= b) << std::endl;
	std::cout << "comparing b <= b : " << (b <= b) << std::endl;
	std::cout << "comparing a == b : " << (a == b) << std::endl;
	std::cout << "comparing a != b : " << (a != b) << std::endl;

	std::cout << std::endl << "Overloaded increment/decrement operators" << std::endl;
	std::cout << "Value of e before operator: " << e << std::endl;
	std::cout << "Preincrement operator" << ++e << std::endl;
	std::cout << "Value of e after operator: " << e << std::endl;
	std::cout << "Value of e before operator: " << e << std::endl;
	std::cout << "Postincrement operator" << e++ << std::endl;
	std::cout << "Value of e after operator" << e << std::endl;
	std::cout << "Value of e before operator: " << e << std::endl;
	std::cout << "Predecrement operator" << --e << std::endl;
	std::cout << "Value of e after operator: " << e << std::endl;
	std::cout << "Value of e before operator: " << e << std::endl;
	std::cout << "Postdecrement operator" << e-- << std::endl;
	std::cout << "Value of e after operator" << e << std::endl;

	std::cout << std::endl << "Max and min member functions: " << std::endl;
	std::cout << "max function with a and b: " << a.max(a, b) << std::endl;
	std::cout << "max function (const &) with c and d: " << a.max(c, d) << std::endl;
	std::cout << "min function with a and b: " << a.min(a, b) << std::endl;
	std::cout << "min function (const &) with c and d: " << a.min(c, d) << std::endl;
	return 0;
}
