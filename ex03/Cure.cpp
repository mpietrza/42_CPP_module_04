/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpietrza <mpietrza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 18:26:03 by mpietrza          #+#    #+#             */
/*   Updated: 2025/02/24 17:05:39 by mpietrza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "colors.hpp"

//default constructor
Cure::Cure()
{
	_type = "cure";
	std::cout << DIM << "Cure default constructor called" << RESET << std::endl;
}

//copy constructor
Cure::Cure(Cure const & other) : AMateria(other)
{
	_type = other._type;
	std::cout << DIM << "Cure copy constructor called" << RESET << std::endl;
}

//assignment operator
Cure &Cure::operator=(Cure const & other)
{
	if (this != &other)
		_type = other._type;
	std::cout << DIM << "Cure assignment operator called" << RESET << std::endl;
	return *this;
}

//destructor
Cure::~Cure() 
{
	std::cout << DIM << "Cure destructor called" << RESET << std::endl;
}

AMateria* Cure::clone() const
{
	return new Cure(*this);
}

void Cure::use(ICharacter & target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
