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
	private:
		int value;
		static const int bits = 8;
};
std::ostream &operator<<(std::ostream &lhs, const Fixed &rhs);

#endif /* *********************************************************** FIXED_H */