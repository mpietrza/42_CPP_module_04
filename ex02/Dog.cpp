/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpietrza <mpietrza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 19:19:56 by mpietrza          #+#    #+#             */
/*   Updated: 2025/02/14 16:36:45 by mpietrza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "colors.hpp"

//default constructor
Dog::Dog() : AAnimal("Dog")
{
	_brain = new Brain();
	std::cout << DIM << "Dog class created with a default constructor" << RESET << std::endl;
}

//parametrized constructor
/*Dog::Dog(std::string type) : _type(type)
{
	std::cout << DIM << "Dog class type: " << type << " created with a parametrized constructor" << RESET << std::endl;
}*/

//copy constructor
Dog::Dog(const Dog &other) : AAnimal(other)
{
	_brain = new Brain(*other._brain);
	_type = other._type;
	std::cout << DIM << "Dog class copied" << RESET << std::endl;
}

//assignment operator
Dog &Dog::operator=(const Dog &other)
{
	if (this != &other)
	{
		delete _brain;
		_type = other._type;
	}
	std::cout << DIM << "Dog assignment operator called" << RESET << std::endl;
	return *this;
}

//destructor
Dog::~Dog()
{
	delete _brain;
	std::cout << DIM << "Dog destructor called" << RESET << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Dog goes \"Wow wow!\"." << std::endl;
}

void Dog::setBrainIdea(const std::string &idea, int index)
{
	_brain->setIdea(idea, index);
}

std::string Dog::getBrainIdea(int index) const
{
	return _brain->getIdea(index);
}

std::string Dog::getType() const
{
	return _type;
}