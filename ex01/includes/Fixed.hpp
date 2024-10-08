/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 14:49:09 by dbarrene          #+#    #+#             */
/*   Updated: 2024/08/03 04:03:22 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class	Fixed{
	public:
		Fixed();
		Fixed(Fixed const& s);
		Fixed(const int num);
		Fixed(const float num);
		~Fixed();
		Fixed&	operator=(Fixed const & s);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		int		toInt( void ) const;
		float	toFloat( void ) const;
	private:
		int	__fixed_point;
		static const int __scaling = 8;
};

std::ostream& operator<<(std::ostream &strm, Fixed const &fp);
#endif
