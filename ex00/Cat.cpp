#include "Cat.hpp"

//default constructor
Cat::Cat()
{
	std::cout << "Cat class created with a default constructor" << std::endl;
}

//parametrized constructor
Cat::Cat(std::string type) : _type(type)
{
	std::cout << "Cat class type: " << type << " created with a parametrized constructor" << std::endl;
}

//copy constructor
Cat::Cat(const Cat &other) : Animal(other)
{
	_type = other._type;
	std::cout << "Cat class copied" << std::endl;
}

//assignment operator
Cat &Cat::operator=(const Cat &other)
{
	if (this !=&other)
		_type = other._type;
	std::cout << "Cat asignment operator called" << std::endl;
	return *this;
}

//destructor
Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;;
}

void Cat::makeSound() const
{
	std::cout << "Cat goes \"Meow!\"." << std::endl;
}
