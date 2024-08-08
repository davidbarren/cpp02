/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 15:03:28 by dbarrene          #+#    #+#             */
/*   Updated: 2024/08/08 18:29:34 by dbarrene         ###   ########.fr       */
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
//	std::cout << "Default Constructor Called" << std::endl;
}

Fixed::Fixed(Fixed const &s)
{
//	std::cout << "Copy Constructor Called" << std::endl;
	this->__fixed_point = s.getRawBits();
}

Fixed::Fixed(const int num) : __fixed_point(num << __scaling)
{
//	std::cout << "Int constructor called" << std::endl;
}
Fixed::Fixed(const float num) : __fixed_point(num * (float) (1 << __scaling))
{
//	std::cout << "Float constructor called" << std::endl;
}
Fixed::~Fixed(){
//	std::cout << "Destructor Called" << std::endl;
}
// Member Functions
int	Fixed::getRawBits() const{
//	std::cout << "getRawBits member function called" << std::endl;
	return (this->__fixed_point);
}

void	Fixed::setRawBits(const int raw)
{
//	std::cout << "setRawBits member function called" << std::endl;
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

Fixed& Fixed::max(Fixed &a, Fixed &b)
{
	if (b < a)
		return (a);
	return (b);
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{
	if (b < a)
		return (a);
	return (b);
}

Fixed& Fixed::min(Fixed &a, Fixed &b)
{
	if (b < a)
		return (b);
	return (a);
}
const Fixed& Fixed::min(const Fixed &a, const Fixed &b)
{
	if (b < a)
		return (b);
	return (a);
}
// Overloads
const Fixed &Fixed::operator=(Fixed const &s){
//	std::cout << "Copy assignment operator called" << std::endl;
	this->__fixed_point = s.getRawBits();
	return *this;
}
// arithmetic operators
Fixed Fixed::operator+(Fixed const &s) const
{
	Fixed ret(*this);
	ret.__fixed_point += s.__fixed_point;	
	return (ret);
}

Fixed Fixed::operator-(Fixed const &s) const
{
	Fixed ret(*this);
	ret.__fixed_point -= s.__fixed_point;	
	return (ret);
}

Fixed Fixed::operator*(Fixed const &s) const
{
	Fixed ret(*this);
	int	result;

	result = (ret.__fixed_point * s.__fixed_point) / (1 << __scaling);
	ret.setRawBits(result);
	return (ret);
}

Fixed Fixed::operator/(Fixed const &s) const
{
	Fixed ret(*this);
	int	result;

	result = (ret.__fixed_point / s.__fixed_point) * (1 <<__scaling);
	ret.setRawBits(result);
	return (ret);
}
// comparison operators
bool Fixed::operator<(Fixed const &s) const
{
	return (this->__fixed_point < s.__fixed_point);
}

bool Fixed::operator>(Fixed const &s) const
{
	return (this->__fixed_point > s.__fixed_point);
}

bool Fixed::operator>=(Fixed const &s) const
{
	return (this->__fixed_point >= s.__fixed_point);
}

bool Fixed::operator<=(Fixed const &s) const
{
	return (this->__fixed_point <= s.__fixed_point);
}

bool Fixed::operator==(Fixed const &s) const
{
	return (this->__fixed_point == s.__fixed_point);
}

bool Fixed::operator!=(Fixed const &s) const
{
	return (this->__fixed_point != s.__fixed_point);
}
// pre/post increment/decrement operators
Fixed& Fixed::operator++()
{
	this->__fixed_point++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed temp = *this;
	this->__fixed_point++;
	return (temp);
}

Fixed& Fixed::operator--()
{
	this->__fixed_point--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed temp = *this;
	this->__fixed_point--;
	return (temp);
}

