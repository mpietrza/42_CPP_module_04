/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpietrza <mpietrza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 18:43:58 by mpietrza          #+#    #+#             */
/*   Updated: 2025/02/11 15:56:49 by mpietrza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "colors.hpp"

//default constructor
Animal::Animal()
{
	_type = "Animal";
	std::cout << DIM << "Animal class created with a default constructor" << RESET << std::endl;
}

//parametrized constructor
Animal::Animal(std::string type) : _type(type)
{
	std::cout << DIM << "Animal class type: " << type << " created with a parametrized constructor" << RESET << std::endl;
}

//copy constructor
Animal::Animal(const Animal &other)
{
	_type = other._type;
	std::cout << DIM << "Animal class copied" << RESET << std::endl;
}

//assignment operator
Animal &Animal::operator=(const Animal &other)
{
	if (this != &other)
		_type = other._type;
	std::cout << DIM << "Animal assignment operator called" << RESET << std::endl;
	return *this;
}

//destructor
Animal::~Animal()
{
	std::cout << DIM << "Animal destructor called" << RESET << std::endl;
}

void	Animal::makeSound() const
{
	std::cout << "Animal goes \"Auuuuuuuu!\"." << std::endl;
}

std::string	Animal::getType() const
{
	return _type;
}

