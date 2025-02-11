/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpietrza <mpietrza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 13:04:29 by mpietrza          #+#    #+#             */
/*   Updated: 2025/02/11 16:28:35 by mpietrza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "colors.hpp"

//default constructor
WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << DIM << "WrongCat class created with a default constructor" << RESET << std::endl;
}

//parametrized constructor
WrongCat::WrongCat(std::string type) : _type(type)
{
	std::cout << DIM << "WrongCat class type: " << type << " created with a parametrized constructor" << RESET << std::endl;
}

//copy constructor
WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other)
{
	_type = other._type;
	std::cout << DIM << "WrongCat class copied" << RESET << std::endl;
}

//assigment operator
WrongCat &WrongCat::operator=(const WrongCat &other)
{
	if (this != &other)
		_type = other._type;
	std::cout << DIM << "Cat assignment operator called" << RESET << std::endl;
	return *this;
}

//destructor
WrongCat::~WrongCat()
{
	std::cout << DIM << "WrongCat destructor called" << RESET << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "WrongCat goes \"Weow Weow!\"." << std::endl;
}

