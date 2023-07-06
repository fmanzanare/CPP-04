/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanzana <fmanzana@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 21:00:18 by fmanzana          #+#    #+#             */
/*   Updated: 2023/07/06 21:38:24 by fmanzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat () {
	Animal::_type = "Cat";
	std::cout << "Cat default constructor called.\n";
}

Cat::~Cat () {
	std::cout << "Cat destructor called.\n";
}

Cat::Cat(const Cat &cp) {
	*this = cp;
	std::cout << "Cat copy constructor called.\n";
}

Cat &Cat::operator=(const Cat &cp) {
	std::cout << "Cat assigment operator called.\n";
	Animal::_type = cp._type;
	return (*this);
}

void Cat::makeSound() const {
	std::cout << "Meow Meow!\n";
}
