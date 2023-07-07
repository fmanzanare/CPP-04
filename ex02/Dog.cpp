/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanzana <fmanzana@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 20:55:34 by fmanzana          #+#    #+#             */
/*   Updated: 2023/07/07 10:51:42 by fmanzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog () {
	AAnimal::_type = "Dog";
	this->_brain = new Brain();
	std::cout << "Dog default constructor called.\n";
}

Dog::~Dog() {
	std::cout << "Dog destructor called.\n";
	delete this->_brain;
}

Dog::Dog(const Dog &cp) {
	*this = cp;
	std::cout << "Dog copy constructor called.\n";
}

Dog &Dog::operator=(const Dog &cp) {
	std::cout << "Dog assigment operator called.\n";
	AAnimal::_type = cp._type;
	return (*this);
}

void Dog::makeSound() const {
	std::cout << "Wuf Wuf!\n";
}
