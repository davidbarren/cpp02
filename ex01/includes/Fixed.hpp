/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 14:49:09 by dbarrene          #+#    #+#             */
/*   Updated: 2024/08/01 18:10:18 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class	Fixed{
	public:
	// Constructors
		Fixed();
		Fixed(Fixed const& s);
		Fixed(const int num);
		Fixed(const float num);
		~Fixed();

		// Overloads
		Fixed& operator=(Fixed const & s);
		 std::ostream& operator<<( std::ostream &stream){
			stream << toFloat();
			return (stream);
		}
//		Fixed& operator<<(Fixed const & s);

		// Member functions
		int	getRawBits(void) const;
		float toFloat(void) const;
		int	toInt(void) const;
		void setRawBits(int const raw);
		void	print_float(const float num) const;
	private:
		int	_fp;
		static const int _bits = 8;
};
#endif
