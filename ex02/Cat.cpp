/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanzana <fmanzana@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 21:00:18 by fmanzana          #+#    #+#             */
/*   Updated: 2023/07/07 10:51:30 by fmanzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat () {
	AAnimal::_type = "Cat";
	this->_brain = new Brain();
	std::cout << "Cat default constructor called.\n";
}

Cat::~Cat () {
	std::cout << "Cat destructor called.\n";
	delete this->_brain;
}

Cat::Cat(const Cat &cp) {
	*this = cp;
	std::cout << "Cat copy constructor called.\n";
}

Cat &Cat::operator=(const Cat &cp) {
	std::cout << "Cat assigment operator called.\n";
	AAnimal::_type = cp._type;
	this->_brain = cp._brain;
	return (*this);
}

void Cat::makeSound() const {
	std::cout << "Meow Meow!\n";
}
