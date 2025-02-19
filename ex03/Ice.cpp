/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpietrza <mpietrza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 17:19:33 by mpietrza          #+#    #+#             */
/*   Updated: 2025/02/19 18:32:50 by mpietrza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

//default constructor
Ice::Ice()
{
	_type = "ice";
}

//copy constructor
Ice::Ice(Ice const & other)
{
	_type = other._type;
}

//assignment operator
Ice &Ice::operator=(Ice const & other)
{
	if (this != &other)
		_type = other._type;
	return *this;
}

//destructor
Ice::~Ice()	{}

AMateria* Ice::clone() const
{
	return new Ice(*this);
}

void Ice::use(ICharacter & target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

