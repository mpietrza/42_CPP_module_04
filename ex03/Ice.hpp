/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpietrza <mpietrza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 16:43:36 by mpietrza          #+#    #+#             */
/*   Updated: 2025/02/19 18:36:10 by mpietrza         ###   ########.fr       */
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
		AMateria* clone() const override;
		void use(ICharacter & target) override;
};

#endif
