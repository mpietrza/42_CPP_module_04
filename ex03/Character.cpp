/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpietrza <mpietrza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 15:49:32 by mpietrza          #+#    #+#             */
/*   Updated: 2025/02/24 18:33:21 by mpietrza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "colors.hpp"

//default constructor
Character::Character() : _name("default"), _inventorySize(0)
{
	for (int i = 0; i < 4; ++i)
		_inventory[i] = NULL; //C++98
	std::cout << DIM << "Character default constructor called" << RESET << std::endl;
}

//parametric constructor
Character::Character(std::string const & name) : _name(name), _inventorySize(0)
{
	for (int i = 0; i < 4; ++i)
		_inventory[i] = NULL; //C++98
	std::cout << DIM << "Character parametric constructor called" << RESET << std::endl;
}

//copy constructor
Character::Character(Character const & other) : _name(other._name), _inventorySize(other._inventorySize)
{
	for (int i = 0; i < 4; ++i)
	{
		if (other._inventory[i])
			_inventory[i] = other._inventory[i]->clone();
		else
			_inventory[i] = NULL; //C++98
	}
	std::cout << DIM << "Character copy constructor called" << RESET << std::endl;
}

//assignment operator
Character & Character::operator=(Character const & other)
{
	if (this != &other)
	{
		_name = other._name;
		_inventorySize = other._inventorySize;
		for (int i = 0; i < 4; ++i)
		{
			if (_inventory[i])
				delete _inventory[i];
			if (other._inventory[i])
				_inventory[i] = other._inventory[i]->clone();
			else
				_inventory[i] = NULL; //C++98
		}
	}
	std::cout << DIM << "Character assignment operator called" << RESET << std::endl;
	return *this;
}

//destructor
Character::~Character()
{
	for (int i = 0; i < 4; ++i)
	{
		if (_inventory[i])
		{
			delete _inventory[i];
			_inventory[i] = NULL; //C++98
		}
	}
	std::cout << DIM << "Character destructor called" << RESET << std::endl;
}

std::string const & Character::getName() const
{
	return _name;
}

void Character::equip(AMateria* m)
{
	if (_inventorySize < 4 && m)
	{
		for (int i = 0; i < 4; ++i)
		{
			if (!_inventory[i])
			{
				_inventory[i] = m;
				++_inventorySize;
				std::cout << DIM << "Equipped " << m->getType() << " to " << _name << RESET << std::endl;
				break;
			}
		}
	}
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4 && _inventory[idx])
	{
		_inventory[idx] = NULL; //c++98
		--_inventorySize;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4 && _inventory[idx])
		_inventory[idx]->use(target);
}
