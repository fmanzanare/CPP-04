/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanzana <fmanzana@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 20:16:57 by fmanzana          #+#    #+#             */
/*   Updated: 2023/07/07 10:56:43 by fmanzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal () {
	std::cout << "Animal default constructor called.\n";
}

AAnimal::~AAnimal() {
	std::cout << "Animal destructor called\n";
}

AAnimal::AAnimal(const AAnimal &cp) {
	*this = cp;
	std::cout << "Animal copy constructor called.\n";
}

AAnimal &AAnimal::operator=(const AAnimal &cp) {
	std::cout << "Animal assigment operator called.\n";
	this->_type = cp._type;
	return (*this);
}

std::string AAnimal::getType() const {
	return (this->_type);
}
