/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milosz <milosz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 18:30:08 by mpietrza          #+#    #+#             */
/*   Updated: 2025/02/10 13:49:22 by milosz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected:
		std::string	_type;
		
	public:
		Animal();
		Animal(std::string type);
		Animal(const Animal &other);
		Animal &operator=(const Animal &other);
		virtual ~Animal();

		void makeSound() const;

		std::string getType() const;
};

#endif
