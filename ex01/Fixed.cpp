#include "Fixed.hpp"

Fixed::Fixed(void)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int n)
{
    std::cout << "Int constructor called" << std::endl;
    fixed_point = n * 256;
}

Fixed::Fixed(const float f)
{
    std::cout << "Float constructor called" << std::endl;
    fixed_point = roundf(f * 256);
}

Fixed::Fixed(const Fixed &old)
{
    std::cout << "Copy constructor called\n";
	*this = old;
}

Fixed::~Fixed( void )
{
    std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &old)
{
    std::cout << "Copy assignment operator called\n";
	if (this != &old)
	{
		this->fixed_point = old.fixed_point;
	}
	return (*this);
}

float   Fixed::toFloat( void ) const
{
    float   res;

    res = (float)fixed_point / 256;
    return (res);
}

int     Fixed::toInt( void ) const
{
    int     res;

    res = fixed_point / 256;
    return (res);
}

std::ostream	&operator<<(std::ostream &out, const Fixed &obj)
{
    out << obj.toFloat();
    return (out);
}
