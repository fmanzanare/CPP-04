/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanzana <fmanzana@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 20:16:57 by fmanzana          #+#    #+#             */
/*   Updated: 2023/07/06 21:46:26 by fmanzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal () {
	std::cout << "Animal default constructor called.\n";
}

Animal::~Animal() {
	std::cout << "Animal destructor called\n";
}

Animal::Animal(const Animal &cp) {
	*this = cp;
	std::cout << "Animal copy constructor called.\n";
}

Animal &Animal::operator=(const Animal &cp) {
	std::cout << "Animal assigment operator called.\n";
	this->_type = cp._type;
	return (*this);
}

void Animal::makeSound() const {
	std::cout << "Generic sound\n";
}

std::string Animal::getType() const {
	return (this->_type);
}
