#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
#include "IMateriaSource.hpp"
class MateriaSource : public IMateriaSource
{
public:

// ----------------------------- Constructors ------------------------------ //
	MateriaSource();	// Default Constructor
	MateriaSource(const MateriaSource& c);	// Copy Constructor

// ------------------------------ Destructor ------------------------------- //
	~MateriaSource();	// Destructor

// ------------------------------- Operators ------------------------------- //
	MateriaSource & operator=(const MateriaSource& a);
	// Copy Assignement Operator

// --------------------------- Getters && Setters -------------------------- //
	AMateria *getLearn(int index);
// --------------------------------- Methods ------------------------------- //
	void learnMateria(AMateria*);
	AMateria* createMateria(std::string const & type);
private:
	AMateria *learned[4];
	int	count;

};

#endif