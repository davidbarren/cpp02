/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 14:49:09 by dbarrene          #+#    #+#             */
/*   Updated: 2024/08/03 04:40:53 by dbarrene         ###   ########.fr       */
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
		static int& min(int& a, int& b);
		static int& max(int& a, int& b);
		static const int& min(const int& a, const int& b);
		static const int& max(const int& a, const int& b);
		// overloads
		Fixed&	operator=(Fixed const & s);
		bool	operator>(Fixed const & s);
		bool	operator<(Fixed const & s);
		bool	operator>=(Fixed const & s);
		bool	operator<=(Fixed const & s);
		bool	operator==(Fixed const & s);
		bool	operator!=(Fixed const & s);
		Fixed	operator+(Fixed const & s);
		Fixed	operator-(Fixed const & s);
		Fixed	operator*(Fixed const & s);
		Fixed	operator/(Fixed const & s);
		Fixed&	operator++(int fp);
		Fixed&	operator--(int fp);
	private:
		int	__fixed_point;
		static const int __scaling = 8;
};

std::ostream& operator<<(std::ostream &strm, Fixed const &fp);
#endif
