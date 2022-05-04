#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>
class Fixed
{

	public:

		Fixed();
		Fixed(const int value);
		Fixed(const float value);
		Fixed( Fixed const & src );
		~Fixed();
		Fixed &operator=(Fixed const &rhs);
		
        int		getRawBits(void) const;
        void	setRawBits(int const raw);
		int		toInt(void) const;
		float	toFloat(void) const;
		Fixed	operator+(const Fixed &rhs) const;
		Fixed	operator-(const Fixed &rhs) const;
		Fixed	operator*(const Fixed &rhs) const;
		Fixed	operator/(const Fixed &rhs) const;
		Fixed	operator++(void);
		Fixed	operator++(int);
		Fixed	operator--(void);
		Fixed	operator--(int);
		bool	operator<(const Fixed &rhs) const;
		bool	operator>(const Fixed &rhs) const;
		bool	operator<=(const Fixed &rhs) const;
		bool	operator>=(const Fixed &rhs) const;
		bool	operator==(const Fixed &rhs) const;
		bool	operator!=(const Fixed &rhs) const;

		static Fixed const	&max(Fixed const &lhs, Fixed const &rhs);
		static Fixed const	&min(Fixed const &lhs, Fixed const &rhs);
		static Fixed 		&max(Fixed  &lhs, Fixed  &rhs);
		static Fixed 		&min(Fixed  &lhs, Fixed  &rhs);

	private:
		int value;
		static const int bits = 8;
};
std::ostream &operator<<(std::ostream &lhs, const Fixed &rhs);

#endif /* *********************************************************** FIXED_H */