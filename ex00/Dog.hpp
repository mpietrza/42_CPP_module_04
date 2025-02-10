/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milosz <milosz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 19:13:33 by mpietrza          #+#    #+#             */
/*   Updated: 2025/02/10 13:57:10 by milosz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
	private:
		std::string _type;

	public:
		Dog();
		Dog(std::string type);
		Dog(const Dog &other);
		Dog &operator=(const Dog &other);
		~Dog();

		void makeSound() const;
};

#endif
