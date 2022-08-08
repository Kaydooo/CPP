#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
#define RED "\033[0;31m"
#define GREEN "\033[1;32m"
#define CYAN "\033[0;36m"
#define YELLOW "\033[1;33m"
#define RESET "\033[0m"

class Fixed
{
	public:
		Fixed();
		Fixed(Fixed const & src);
		~Fixed();
		Fixed &	operator=( Fixed const & rhs );

        int		getRawBits(void) const;
        void	setRawBits(int const raw);

	private:
		int value;
		static const int bits = 8;
};

#endif