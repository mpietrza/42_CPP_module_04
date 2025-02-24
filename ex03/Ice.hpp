/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpietrza <mpietrza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 16:43:36 by mpietrza          #+#    #+#             */
/*   Updated: 2025/02/24 16:48:54 by mpietrza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP
 
#include "AMateria.hpp"

 class Ice : public AMateria
 {
	 public:
	 	//Ice(std::string const & type);
		Ice();
		Ice(Ice const & other);
		Ice & operator=(Ice const & other);
		~Ice();
		AMateria* clone() const; //override; in C++11
		void use(ICharacter & target); //override; in C++11
};

#endif
