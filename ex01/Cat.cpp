/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpietrza <mpietrza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 12:16:13 by mpietrza          #+#    #+#             */
/*   Updated: 2025/02/11 16:28:19 by mpietrza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "colors.hpp"

//default constructor
Cat::Cat(): Animal("Cat")
{
	std::cout << DIM << "Cat class created with a default constructor" << RESET << std::endl;
}

//parametrized constructor
Cat::Cat(std::string type) : _type(type)
{
	std::cout << DIM << "Cat class type: " << type << " created with a parametrized constructor" << RESET << std::endl;
}

//copy constructor
Cat::Cat(const Cat &other) : Animal(other)
{
	_type = other._type;
	std::cout << DIM << "Cat class copied" << RESET << std::endl;
}

//assignment operator
Cat &Cat::operator=(const Cat &other)
{
	if (this != &other)
		_type = other._type;
	std::cout << DIM << "Cat assignment operator called" << RESET << std::endl;
	return *this;
}

//destructor
Cat::~Cat()
{
	std::cout << DIM << "Cat destructor called" << RESET << std::endl;;
}

void Cat::makeSound() const
{
	std::cout << "Cat goes \"Meow!\"." << std::endl;
}
