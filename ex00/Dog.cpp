/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpietrza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 19:19:56 by mpietrza          #+#    #+#             */
/*   Updated: 2025/02/07 19:30:20 by mpietrza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

//default constructor
Dog::Dog()
{
	std::cout << "Dog class created with a default constructor" << std::endl;
}

//parametrized constructor
Dog::Dog(std::string type) : _type(type)
{
	std::cout << "Dog class type: " << type << " created with a parametrized constructor" << std::endl;
}

//copy constructor
Dog::Dog(const Dog &other)
{
	_type = other._type;
	std::cout << "Dog class copied" << std::endl;
}

//assignment operator
Dog &Dog::operator=(const Dog &other)
{
	if (this !=&other)
		_type = other._type;
	std::cout << "Dog assignment operator called" << std:endl;
	return *this;
}

//destructor
Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}

void Dog::MakeSound() const
{
	std::cout << "Dog goes \"Wow wow!\"." << std::endl;
}
