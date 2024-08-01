/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 15:03:28 by dbarrene          #+#    #+#             */
/*   Updated: 2024/08/01 17:37:47 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

// default constructor
Fixed::Fixed(){
	this->_fp = 0;
	std::cout << "Default Constructor Called" << std::endl;
}
// assigning int constructor
Fixed::Fixed(const int num){
	this->_fp = num;
}

// assigning float constructor
Fixed::Fixed(const float num){
	this->_fp = num;
}

// copy constructor
Fixed::Fixed(Fixed const &s)
{
	this->_fp = s.getRawBits();
	std::cout << "Copy Constructor Called" << std::endl;
}

//destructor
Fixed::~Fixed(){
	std::cout << "Destructor Called" << std::endl;
}

// public member functions
int	Fixed::getRawBits() const{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fp);
}

void	Fixed::setRawBits(const int raw)
{
	this->_fp = raw;
}

int	Fixed::toInt() const{
	int	conversion;
	conversion = static_cast<int>(this->_fp);
	return (conversion);
}

float	Fixed::toFloat() const{
	float conversion;
	conversion = this->_fp / (1 << 8);
	return (conversion);
}

void	Fixed::print_float(const float num) const{
	std::cout << num;
}


// Operator Overloads
Fixed &Fixed::operator=(Fixed const &s){
	this->_fp = s.getRawBits();
	return *this;
}
//Fixed &Fixed::operator<<(
//
//std::ostream& operator<<(std::ostream& stream ,const Fixed  &s){
//	s.print_float(s.toFloat());	
//	return (stream);
//}
