#ifndef IMATERIASOURCE
# define IMATERIASOURCE

# include <iostream>
# include "AMateria.hpp"

class IMateriaSource
{
public:
	
// ------------------------------ Destructor ------------------------------- //
	virtual ~IMateriaSource() {}

// --------------------------- Getters && Setters -------------------------- //

// --------------------------------- Methods ------------------------------- //
	virtual void learnMateria(AMateria*) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;
	
};

#endif /* IMATERIASOURCE */
