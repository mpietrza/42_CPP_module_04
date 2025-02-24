/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpietrza <mpietrza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 16:30:12 by mpietrza          #+#    #+#             */
/*   Updated: 2025/02/24 17:04:52 by mpietrza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "colors.hpp"

//default constructor
MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; ++i)
		templates[i] = NULL;
	std::cout << DIM << "MateriaSource default constructor called" << RESET << std::endl;
}

//copy constructor
MateriaSource::MateriaSource(MateriaSource const &other)
{
	for (int i = 0; i < 4; ++i)
	{
		if (other.templates[i])
			templates[i] = other.templates[i]->clone();
		else
			templates[i] = NULL;
	}
	std::cout << DIM << "MateriaSource copy constructor called" << RESET << std::endl;
}

//assignment operator
MateriaSource &MateriaSource::operator=(MateriaSource const &other)
{
	if (this != &other)
	{
		for (int i = 0; i < 4; ++i)
		{
			if (templates[i])
				delete templates[i];
			if (other.templates[i])
				templates[i] = other.templates[i]->clone();
			else
				templates[i] = NULL;
		}
	}
	std::cout << DIM << "MateriaSource assignment operator called" << RESET << std::endl;
	return *this;
}

//destructor
MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; ++i)
		if (templates[i])
			delete templates[i];
	std::cout << DIM << "MateriaSource destructor called" << RESET << std::endl;
}

void MateriaSource::learnMateria(AMateria* m)
{
	if (!m)
		return;
	for (int i = 0; i < 4; ++i)
	{
		if (!templates[i])
		{
			templates[i] = m;
			break;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; ++i)
		if (templates[i] && templates[i]->getType() == type)
			return templates[i]->clone();
	return NULL;
}			
