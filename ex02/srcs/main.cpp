/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 16:56:53 by dbarrene          #+#    #+#             */
/*   Updated: 2024/08/03 15:26:27 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

int	main(void)
{
	Fixed a;
	Fixed  b( 10 );
	Fixed const c( 42.42f );
	Fixed const d( b );

	a = Fixed( 1234.4321f );
	std::cout << "result of addition: " << a+b << std::endl;
	std::cout << "value of a: " << a << std::endl;
	std::cout << "result of subtraction: " << a-b << std::endl;
	std::cout << "value of a: " << a << std::endl;
	std::cout << "result of multiplication: " << a*b << std::endl;
	std::cout << "value of a: " << a << std::endl;
	std::cout << "result of division: " << a/b << std::endl;
	std::cout << "value of a: " << a << std::endl;
	return 0;
}
