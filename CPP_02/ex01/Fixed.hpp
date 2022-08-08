#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

#define RED "\033[0;31m"
#define GREEN "\033[1;32m"
#define CYAN "\033[0;36m"
#define YELLOW "\033[1;33m"
#define RESET "\033[0m"

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