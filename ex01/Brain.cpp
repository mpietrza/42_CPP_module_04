/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpietrza <mpietrza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 15:38:45 by mpietrza          #+#    #+#             */
/*   Updated: 2025/02/12 15:57:50 by mpietrza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "colors.hpp"

//default constructor
Brain::Brain()
{
	std::cout << DIM << "Brain class created with a default constructor" << RESET << std::endl;
}

//copy constructor
Brain::Brain(const Brain &other)
{
	*this = other;
	std::cout << DIM < "Brain class copied" << RESET << std::endl;
}

//assignment operator
Brain &Brain::operator=(const Brain &other)
{
	if (this != &other)
	{
		for (int i = 0; i < 100; ++i)
			this->ideas[i] = other.ideas[i];
	}
	std::cout << DIM << "Brain assignment operator called" << RESET << std::endl;
	return *this;
}
