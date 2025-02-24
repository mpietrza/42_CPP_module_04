/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpietrza <mpietrza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 15:30:45 by mpietrza          #+#    #+#             */
/*   Updated: 2025/02/24 19:02:54 by mpietrza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "IMateriaSource.hpp"
#include "ICharacter.hpp"
#include "colors.hpp"

void	additionalTest(void) 
{
	std::cout <<  "\nAdditional test\n" << std::endl;
	
	IMateriaSource * src = new MateriaSource();
	ICharacter * someone = new Character("Someone");

	AMateria *deadly = new Ice();
	AMateria *healing = new Cure();
	src->learnMateria(deadly);
	src->learnMateria(healing);


	ICharacter * anotherOne = new Character("Another One");

	//test of use function
	someone->use(0, *anotherOne);
	someone->use(1, *someone);

	//test of unequip function
	for (int i = 0; i < 4; i++) 
		someone->unequip(i);

	delete src;
	delete someone;
	delete anotherOne;
	
}


int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;

	additionalTest();
	return 0;
}


