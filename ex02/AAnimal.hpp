/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpietrza <mpietrza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 18:30:08 by mpietrza          #+#    #+#             */
/*   Updated: 2025/02/14 16:34:17 by mpietrza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include "Brain.hpp"
#include <iostream>

class AAnimal
{
	protected:
		std::string	_type;
		
	public:
		AAnimal();
		AAnimal(std::string type);
		AAnimal(const AAnimal &other);
		AAnimal &operator=(const AAnimal &other);
		virtual ~AAnimal();

		virtual void makeSound() const = 0;

		std::string getType() const;
};

#endif
