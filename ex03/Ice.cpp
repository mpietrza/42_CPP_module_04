/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpietrza <mpietrza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 17:19:33 by mpietrza          #+#    #+#             */
/*   Updated: 2025/02/24 17:03:58 by mpietrza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "colors.hpp"

//default constructor
Ice::Ice() : AMateria("ice")
{
	std::cout << DIM << "Ice default constructor called" << RESET << std::endl;
}

//copy constructor
Ice::Ice(Ice const & other) : AMateria(other)
{
	std::cout << DIM << "Ice copy constructor called" << RESET << std::endl;
}

//assignment operator
Ice &Ice::operator=(Ice const & other)
{
	if (this != &other)
		AMateria::operator=(other);
	std::cout << DIM << "Ice assignment operator called" << RESET << std::endl;
	return *this;
}

//destructor
Ice::~Ice()	
{
	std::cout << DIM << "Ice destructor called" << RESET << std::endl;
}

AMateria* Ice::clone() const
{
	return new Ice(*this);
}

void Ice::use(ICharacter & target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

