/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 14:49:09 by dbarrene          #+#    #+#             */
/*   Updated: 2024/08/03 02:43:41 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#ifndef FIXED_HPP
#define FIXED_HPP

class	Fixed{
	public:
		Fixed();
		Fixed(Fixed const& s);
		~Fixed();
		Fixed& operator=(Fixed const & s);
		int	getRawBits(void) const;
		void setRawBits(int const raw);
	private:
		int	__fixed_point;
		static const int __scaling = 8;
};
#endif
