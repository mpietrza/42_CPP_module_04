/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpietrza <mpietrza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 18:43:58 by mpietrza          #+#    #+#             */
/*   Updated: 2025/02/07 19:02:18 by mpietrza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
//default constructor
Animal::Animal()
{
	std::cout << "Animal class created with a default constructor" << std::endl;
}

//parametrized constructor
Animal::Animal(std::string type) : _type(type)
{
	std::cout << "Animal class type: " << type << " created with a parametrized constructor" << std::endl;
}

//copy constructor
Animal::Animal(const Animal &other)
{
	_type = other._type;
	std::cout << "Animal class copied" << std::endl;
}

//assignment operator
Animal &Animal::operator=(const Animal &other)
{
	if (this != &other)
		_type = other._type;
	std::cout << "Animal assignment operator called" << std::endl;
	return *this;
}

//destructor
Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}
