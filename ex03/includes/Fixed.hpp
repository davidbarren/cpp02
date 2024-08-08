/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 14:49:09 by dbarrene          #+#    #+#             */
/*   Updated: 2024/08/03 18:12:33 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class	Fixed{
	public:
		// constructors/destructors
		Fixed();
		Fixed(Fixed const& s);
		Fixed(const int num);
		Fixed(const float num);
		~Fixed();
		// methods
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		int		toInt( void ) const;
		float	toFloat( void ) const;
		static Fixed& min(Fixed& a, Fixed& b);
		static Fixed& max(Fixed& a, Fixed& b);
		static const Fixed& min(const Fixed& a, const Fixed& b);
		static const Fixed& max(const Fixed& a, const Fixed& b);
		// overloads
		Fixed&	operator=(Fixed const & s);
		bool	operator>(Fixed const & s) const;
		bool	operator<(Fixed const & s) const;
		bool	operator>=(Fixed const & s) const;
		bool	operator<=(Fixed const & s) const;
		bool	operator==(Fixed const & s) const;
		bool	operator!=(Fixed const & s) const;
		Fixed	operator+(Fixed const & s) const;
		Fixed	operator-(Fixed const & s) const;
		Fixed	operator*(Fixed const & s) const;
		Fixed	operator/(Fixed const & s) const;
		// Preincrement returns modified reference to object
		Fixed&	operator--();
		Fixed&	operator++();
		// Post increment returns copy of object but increments the original
		Fixed	operator--(int);
		Fixed	operator++(int);
	private:
		int	__fixed_point;
		static const int __scaling = 8;
};

std::ostream& operator<<(std::ostream &strm, Fixed const &fp);
#endif
