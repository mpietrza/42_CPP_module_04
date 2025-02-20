/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpietrza <mpietrza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 16:36:54 by mpietrza          #+#    #+#             */
/*   Updated: 2025/02/19 18:32:52 by mpietrza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

//parametrized constructor
AMateria::AMateria(std::string const & type) : _type(type) {}

//default constructor
AMateria::AMateria() : _type("") {}

//copy constructor
AMateria::AMateria(AMateria const & other) : _type(other._type) {}

//assignment operator
AMateria & AMateria::operator=(AMateria const & other) 
{
	if (this != &other)
		_type = other._type;
	return *this;
}

//destructor
AMateria::~AMateria() {}

std::string const & AMateria::getType() const
{
	return _type;
}

void AMateria::use(ICharacter& target)
{
	//default implementation does nothing
}


