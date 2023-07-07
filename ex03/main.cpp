/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanzana <fmanzana@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 13:15:45 by fmanzana          #+#    #+#             */
/*   Updated: 2023/07/07 14:10:48 by fmanzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSoruce.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
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

	// Additional tests:
	src->learnMateria(new Ice()); // 5th materia. It will print a message.
	src->learnMateria(new Cure()); // 6th materia. It will print a message.
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp); // 5th equipmet. It will print a message.
	me->unequip(3);
	me->unequip(3); // slot 3 is already empty. It will print a message.
	me->unequip(4); // slot 3 does not exist. It will print a message.
	tmp = src->createMateria("ice");
	me->equip(tmp);
	me->unequip(0);

	delete bob;
	delete me;
	delete src;

	return (0);
}
