/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpietrza <mpietrza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 19:19:56 by mpietrza          #+#    #+#             */
/*   Updated: 2025/02/11 16:28:48 by mpietrza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "colors.hpp"

//default constructor
Dog::Dog() : Animal("Dog")
{
	std::cout << DIM << "Dog class created with a default constructor" << RESET << std::endl;
}

//parametrized constructor
Dog::Dog(std::string type) : _type(type)
{
	std::cout << DIM << "Dog class type: " << type << " created with a parametrized constructor" << RESET << std::endl;
}

//copy constructor
Dog::Dog(const Dog &other) : Animal(other)
{
	_type = other._type;
	std::cout << DIM << "Dog class copied" << RESET << std::endl;
}

//assignment operator
Dog &Dog::operator=(const Dog &other)
{
	if (this !=&other)
		_type = other._type;
	std::cout << DIM << "Dog assignment operator called" << RESET << std::endl;
	return *this;
}

//destructor
Dog::~Dog()
{
	std::cout << DIM << "Dog destructor called" << RESET << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Dog goes \"Wow wow!\"." << std::endl;
}
