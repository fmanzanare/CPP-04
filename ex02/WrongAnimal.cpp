/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanzana <fmanzana@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 21:45:14 by fmanzana          #+#    #+#             */
/*   Updated: 2023/07/06 21:48:19 by fmanzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal () {
	std::cout << "WrongAnimal default constructor called.\n";
}

WrongAnimal::~WrongAnimal () {
	std::cout << "WrongAnimal destructor called.\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal &cp) {
	*this = cp;
	std::cout << "WrongAnimal copy constructor called.\n";
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &cp) {
	std::cout << "WrongAnimal assigment operator called.\n";
	this->_type = cp._type;
	return (*this);
}

void	WrongAnimal::makeSound() const {
	std::cout << "Wrong generic sound.\n";
}

std::string WrongAnimal::getType() const {
	return (this->_type);
}
