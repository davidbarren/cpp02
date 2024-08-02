/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 15:03:28 by dbarrene          #+#    #+#             */
/*   Updated: 2024/08/03 02:51:41 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

Fixed::Fixed() : __fixed_point(0){
	std::cout << "Default Constructor Called" << std::endl;
}

Fixed::Fixed(Fixed const &s)
{
	std::cout << "Copy Constructor Called" << std::endl;
	this->__fixed_point = s.getRawBits();
}
Fixed::~Fixed(){
	std::cout << "Destructor Called" << std::endl;
}

int	Fixed::getRawBits() const{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->__fixed_point);
}

void	Fixed::setRawBits(const int raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->__fixed_point = raw;
}

Fixed &Fixed::operator=(Fixed const &s){
	std::cout << "Copy assignment operator called" << std::endl;
	this->__fixed_point = s.getRawBits();
	return *this;
}
