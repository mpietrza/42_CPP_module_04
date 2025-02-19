/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpietrza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 18:26:03 by mpietrza          #+#    #+#             */
/*   Updated: 2025/02/19 18:32:46 by mpietrza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

//default constructor
Cure::Cure()
{
	_type = "cure";
}

//copy constructor
Cure::Cure(Cure const & other)
{
	_type = other._type;
}

//assignment operator
Cure &Cure::operator=(Cure const & other)
{
	if (this != &other)
		_type = other._type;
		return *this;
}

//destructor
Cure::~Cure() {}

AMateria* Cure::clone() const
{
	return new Cure(*this);
}

void Cure::use(ICharacter & target)
{
	std::cout << "*heals " << target.getName() << "'s wounds*" << std::endl;
}
