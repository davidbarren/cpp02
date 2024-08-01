/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 15:03:28 by dbarrene          #+#    #+#             */
/*   Updated: 2024/07/31 17:39:25 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

Fixed::Fixed(){
	this->_fp = 0;
	std::cout << "Default Constructor Called" << std::endl;
}

Fixed::Fixed(Fixed const &s)
{
	this->_fp = s.getRawBits();
	std::cout << "Copy Constructor Called" << std::endl;
}
Fixed::~Fixed(){
	std::cout << "Destructor Called" << std::endl;
}

int	Fixed::getRawBits() const{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fp);
}

void	Fixed::setRawBits(const int raw)
{
	this->_fp = raw;
}

Fixed &Fixed::operator=(Fixed const &s){
	this->_fp = s.getRawBits();
	return *this;
}
