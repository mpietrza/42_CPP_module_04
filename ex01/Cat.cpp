/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpietrza <mpietrza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 12:16:13 by mpietrza          #+#    #+#             */
/*   Updated: 2025/02/13 19:06:08 by mpietrza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "colors.hpp"

//default constructor
Cat::Cat(): Animal("Cat")
{
	_brain = new Brain();
	std::cout << DIM << "Cat class created with a default constructor" << RESET << std::endl;
}

//parametrized constructor
/*Cat::Cat(std::string type) : _type(type)
{
	std::cout << DIM << "Cat class type: " << type << " created with a parametrized constructor" << RESET << std::endl;
}*/

//copy constructor
Cat::Cat(const Cat &other) : Animal(other)
{
	_brain = new Brain(*other._brain);
	_type = other._type;
	std::cout << DIM << "Cat class copied" << RESET << std::endl;
}

//assignment operator
Cat &Cat::operator=(const Cat &other)
{
	if (this != &other)
	{
		delete _brain;
		_brain = new Brain(*other._brain);
	}
	std::cout << DIM << "Cat assignment operator called" << RESET << std::endl;
	return *this;
}

//destructor
Cat::~Cat()
{
	delete _brain;
	std::cout << DIM << "Cat destructor called" << RESET << std::endl;;
}

void Cat::makeSound() const
{
	std::cout << "Cat goes \"Meow!\"." << std::endl;
}

void Cat::setBrainIdea(const std::string &idea, int index)
{
	_brain->setIdea(idea, index);
}

std::string Cat::getBrainIdea(int index) const
{
	return _brain->getIdea(index);
}
