#include "Fixed.hpp"

Fixed::Fixed(void)
{
	fixed_point = 0;
	std::cout << "Default constructor called\n";
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called\n";
}

Fixed::Fixed(const Fixed &old)
{
	fixed_point = old.fixed_point;
	std::cout << "Copy constructor called\n";
}

Fixed &Fixed::operator=(const Fixed &old)
{
	std::cout << "Copy assignment operator called\n";
	if (this != &old)
	{
		this->fixed_point = old.getRawBits();
	}
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";
	// std::cout << fixed_point;
	return (fixed_point);
}

void	Fixed::setRawBits(int const raw)
{
	this->fixed_point = raw;
	// std::cout << fixed_point << "\n";
}