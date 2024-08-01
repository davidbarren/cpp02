/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 16:56:53 by dbarrene          #+#    #+#             */
/*   Updated: 2024/08/01 04:12:50 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

std::ostream& operator<<(std::ostream& stream ,const Fixed  &s){
	s.print_float(s.toFloat());	
	return (stream);
}

int	main(void)
{
	Fixed a;
	Fixed const b (10);
	Fixed const c (42.42f);
	Fixed const d ( b );
	
	a = Fixed( 1234.4321f);
	std::cout << "my debug: " << a.toFloat() << std::endl;
	std::cout << "a is " << a << std::endl;
//	std::cout << "b is" << b << std::endl;
//	std::cout << "c is" << c << std::endl;
//	std::cout << "d is" << d << std::endl;
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	return 0;
}
