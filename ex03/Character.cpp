/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanzana <fmanzana@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 11:35:50 by fmanzana          #+#    #+#             */
/*   Updated: 2023/07/07 13:58:33 by fmanzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

ICharacter::~ICharacter () {}

Character::Character() {
	this->_name = "Noname";
	for (int i = 0 ; i < 4; i++) {
		this->_inventory[i] = NULL;
	}
	for (int i = 0 ; i < 10; i++) {
		this->_unequiped[i] = NULL;
	}
	// std::cout << "Character default constructor called." << std::endl;
}

Character::Character(std::string name) {
	this->_name = name;
	for (int i = 0 ; i < 4; i++) {
		this->_inventory[i] = NULL;
	}
	for (int i = 0 ; i < 10; i++) {
		this->_unequiped[i] = NULL;
	}
	// std::cout << "Character " + this->_name + " has been created." << std::endl;
}

Character::~Character() {
	for (int i = 0; i < 4; i++) {
		if (this->_inventory[i] != NULL)
			delete this->_inventory[i];
	}
	for (int i = 0; i < 10; i++) {
		if (this->_unequiped[i] != NULL)
			delete this->_unequiped[i];
	}
	// std::cout << "Character destructor called." << std::endl;
}

Character::Character(const Character &cp) {
	*this = cp;
	// std::cout << "Character copy constructor called." << std::endl;
}

Character &Character::operator=(const Character &cp) {
	// std::cout << "Charcter assgiment operator called." << std::endl;
	this->_name = cp._name;
	for (int i = 0; i < 4; i++) {
		if (this->_inventory[i] != NULL)
			delete this->_inventory[i];
	}
	for (int i = 0; i < 10; i++) {
		if (this->_unequiped[i] != NULL)
			delete this->_unequiped[i];
	}
	for (int i = 0 ; i < 4; i++) {
		this->_inventory[i] = cp._inventory[i];
	}
	for (int i = 0 ; i < 10; i++) {
		this->_unequiped[i] = cp._unequiped[i];
	}
	return (*this);
}

std::string const &Character::getName() const {
	return (this->_name);
}

void Character::equip(AMateria *m) {
	bool full = true;

	for (int i = 0; i < 4; i++) {
		if (this->_inventory[i] == NULL) {
			full = false;
		}
	}

	if (!full) {
		for (int i = 0; i < 4; i++) {
			if (this->_inventory[i] == NULL) {
				this->_inventory[i] = m;
				break;
			}
		}
	} else {
		std::cout << "The invertory is already full" << std::endl;
	}
}

void Character::unequip(int idx) {
	if (idx >= 4) {
		std::cout << "The idx is bigger than the inventory size." << std::endl;
		return ;
	}

	bool full = true;

	for (int i = 0; i < 10; i++) {
		if (this->_unequiped[i] == NULL) {
			full = false;
			break ;
		}
	}

	if (full) {
		std::cout << "The floor is full of equipment. You cannot throw more equipment." << std::endl;
		return ;
	}

	if (this->_inventory[idx] != NULL) {
		for (int i = 0; i < 10; i++) {
			if (this->_unequiped[i] == NULL) {
				this->_unequiped[i] = this->_inventory[idx];
				this->_inventory[idx] = NULL;
				std::cout << "The slot " << idx << " has been unequiped." << std::endl;
				return ;
			}
		}
	} else {
		std::cout << "This slot is already empty." << std::endl;
	}
}

void Character::use(int idx, ICharacter &target) {
	if (idx >= 4) {
		std::cout << "The idx is bigger than the inventory size." << std::endl;
		return ;
	}

	if (this->_inventory[idx] != NULL) {
		this->_inventory[idx]->use(target);
	} else {
		std::cout << "The slot is empty." << std::endl;
	}
}
