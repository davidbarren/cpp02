/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 15:03:28 by dbarrene          #+#    #+#             */
/*   Updated: 2024/08/09 18:15:18 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"
// Constructors

std::ostream& operator<<(std::ostream &strm, Fixed const &fp)
{
	strm << fp.toFloat();
	return (strm);
}
Fixed::Fixed() : __fixed_point(0){
	std::cout << "Default Constructor Called" << std::endl;
}

Fixed::Fixed(Fixed const &s)
{
	std::cout << "Copy Constructor Called" << std::endl;
	this->__fixed_point = s.getRawBits();
}

Fixed::Fixed(const int num) : __fixed_point(num << __scaling)
{
	std::cout << "Int constructor called" << std::endl;
}
Fixed::Fixed(const float num) : __fixed_point(roundf(num *(1 << __scaling)))
{
	std::cout << "Float constructor called" << std::endl;
}
Fixed::~Fixed(){
	std::cout << "Destructor Called" << std::endl;
}
// Member Functions
int	Fixed::getRawBits() const{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->__fixed_point);
}

void	Fixed::setRawBits(const int raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->__fixed_point = raw;
}
int		Fixed::toInt() const
{
	return (this->__fixed_point >> __scaling);
}

float		Fixed::toFloat() const
{
	return ((float)__fixed_point / (float) (1 << __scaling));
}
// Overloads
Fixed &Fixed::operator=(Fixed const &s){
	std::cout << "Copy assignment operator called" << std::endl;
	this->__fixed_point = s.getRawBits();
	return *this;
}
