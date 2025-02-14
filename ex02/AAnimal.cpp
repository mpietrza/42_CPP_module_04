/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpietrza <mpietrza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 18:43:58 by mpietrza          #+#    #+#             */
/*   Updated: 2025/02/14 16:34:08 by mpietrza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "colors.hpp"

//default constructor
AAnimal::AAnimal()
{
	_type = "Animal";
	std::cout << DIM << "Animal class created with a default constructor" << RESET << std::endl;
}

//parametrized constructor
AAnimal::AAnimal(std::string type) : _type(type)
{
	std::cout << DIM << "Animal class type: " << type << " created with a parametrized constructor" << RESET << std::endl;
}

//copy constructor
AAnimal::AAnimal(const AAnimal &other)
{
	_type = other._type;
	std::cout << DIM << "Animal class copied" << RESET << std::endl;
}

//assignment operator
AAnimal &AAnimal::operator=(const AAnimal &other)
{
	if (this != &other)
		_type = other._type;
	std::cout << DIM << "Animal assignment operator called" << RESET << std::endl;
	return *this;
}

//destructor
AAnimal::~AAnimal()
{
	std::cout << DIM << "Animal destructor called" << RESET << std::endl;
}

std::string	AAnimal::getType() const
{
	return _type;
}

