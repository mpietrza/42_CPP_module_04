/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpietrza <mpietrza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 12:31:54 by mpietrza          #+#    #+#             */
/*   Updated: 2025/02/11 16:08:03 by mpietrza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "colors.hpp"

//default constructor
WrongAnimal::WrongAnimal()
{
	_type = "WrongAnimal";
	std::cout << DIM << "WrongAnimal class created with a default constructor" << RESET << std::endl;
}

//parametrized constructor
WrongAnimal::WrongAnimal(std::string type) : _type(type)
{
	std::cout << DIM << "WrongAnimal class type " << type << " created with a parametrized constructor" << RESET << std::endl;
}

//copy constructor
WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	_type = other._type;
	std::cout << DIM << "WrongAnimal class copied" << RESET << std::endl;
}

//assignment operator
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
	if (this != &other)
		_type = other._type;
	std::cout << DIM << "WrongAnimal assignment operator called" << RESET << std::endl;
	return *this;
}

//destructor
WrongAnimal::~WrongAnimal()
{
	std::cout << DIM << "WrongAnimal destructor called" << RESET << std::endl;
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal goes \"Hello!\"." << std::endl;
}

std::string WrongAnimal::getType() const
{
	return _type;
}

