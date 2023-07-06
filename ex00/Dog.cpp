/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanzana <fmanzana@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 20:55:34 by fmanzana          #+#    #+#             */
/*   Updated: 2023/07/06 21:38:32 by fmanzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog () {
	Animal::_type = "Dog";
	std::cout << "Dog default constructor called.\n";
}

Dog::~Dog() {
	std::cout << "Dog destructor called.\n";
}

Dog::Dog(const Dog &cp) {
	*this = cp;
	std::cout << "Dog copy constructor called.\n";
}

Dog &Dog::operator=(const Dog &cp) {
	std::cout << "Dog assigment operator called.\n";
	Animal::_type = cp._type;
	return (*this);
}

void Dog::makeSound() const {
	std::cout << "Wuf Wuf!\n";
}
