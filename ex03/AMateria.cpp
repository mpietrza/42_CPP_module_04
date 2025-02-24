/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpietrza <mpietrza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 16:36:54 by mpietrza          #+#    #+#             */
/*   Updated: 2025/02/24 17:02:29 by mpietrza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "colors.hpp"

//default constructor
AMateria::AMateria() : _type("default") 
{
	std::cout << DIM << "AMateria default constructor called" << RESET << std::endl;
}

//parametrized constructor
AMateria::AMateria(std::string const & type) : _type(type) 
{
	std::cout << DIM << "AMateria parametrized constructor called" << RESET << std::endl;
}

//copy constructor
AMateria::AMateria(AMateria const & other) : _type(other._type) 
{
	std::cout << DIM << "AMateria copy constructor called" << RESET << std::endl;
}

//assignment operator
AMateria & AMateria::operator=(AMateria const & other) 
{
	if (this != &other)
		_type = other._type;
	std::cout << DIM << "AMateria assignment operator called" << RESET << std::endl;
	return *this;
}

//destructor
AMateria::~AMateria() 
{
	std::cout << DIM << "AMateria destructor called" << RESET << std::endl;
}

std::string const & AMateria::getType() const
{
	return _type;
}

void AMateria::use(ICharacter& target)
{
	(void)target;
	//default implementation does nothing
}


