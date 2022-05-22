#include "MateriaSource.hpp"

// ----------------------------- Constructors ------------------------------ //
MateriaSource::MateriaSource(): count(0)
{
	std::cout << GREEN << "MateriaSource() Default Constructor Called" << RESET << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource& c) 
{
	//delete [] learned;
	for(int i = 0; i < 4 ; i++)
	{
		learned[i] = c.learned[i];
	}
}

// ------------------------------ Destructor ------------------------------- //
MateriaSource::~MateriaSource()
{

}
// ------------------------------- Operators ------------------------------- //

MateriaSource & MateriaSource::operator=(const MateriaSource& c)
{
	//delete[] learned;
	for(int i = 0; i < 4 ; i++)
	{
		learned[i] = c.learned[i];
	}
	return *this;
}

// --------------------------- Getters && Setters -------------------------- //
AMateria *MateriaSource::getLearn(int index)
{
	return(learned[index]);
}
// --------------------------------- Methods ------------------------------- //
void MateriaSource::learnMateria(AMateria* toLearn)
{
	if(count < 4)
	{
		learned[count] = toLearn;
		count++;
	}
	else
	{
		std::cout << "Already Learnt 4 !" << std::endl;
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for(int i = 0; i < count ; i++)
	{
		if(!(learned[i]->getType().compare(type)))
		{
			return learned[i];
		}
	}
	std::cout << "AMateria Not Learned yet !" << std::endl;
	return NULL;
}