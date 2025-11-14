# ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class   Fixed
{
	private:
		int	                fixed_point;
		static const int	fractional_bits = 8;

	public:
		//Roba3i l9ahar
		Fixed(void);
		Fixed(const int n);
		Fixed(const float f);

		Fixed(const Fixed &old);
		Fixed &operator=(const Fixed &old);
		~Fixed(void);

		float	toFloat( void ) const;
		int		toInt( void ) const;
		// int		getRawBits(void) const;
		// void	setRawBits(int const raw);
};

std::ostream	&operator<<(std::ostream &out, const Fixed &old);

# endif