#include "Animal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Animal::Animal()
{
	std::cout << "Animal Default constructor called" << std::endl;
}

Animal::Animal( const Animal & src )
{
	std::cout << "Animal Copy constructor called" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Animal::~Animal()
{
	std::cout << "Animal Default Destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Animal &				Animal::operator=( Animal const & rhs )
{
	if ( this != &rhs )
	{
		this->type = rhs.getType();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Animal const & i )
{
	o << i.getType();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

std::string Animal::getType(void) const
{
	return this->type;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */