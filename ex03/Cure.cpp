/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanzana <fmanzana@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 11:57:53 by fmanzana          #+#    #+#             */
/*   Updated: 2023/07/07 13:36:05 by fmanzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() {
	AMateria::_type = "cure";
	// std::cout << "Cure default constructor called." << std::endl;
}

Cure::~Cure() {
	// std::cout << "Cure destructor called." << std::endl;
}

Cure::Cure(const Cure &cp) {
	*this = cp;
	// std::cout << "Cure copy constructor called." << std::endl;
}

Cure &Cure::operator=(const Cure &cp) {
	// std::cout << "Cure assigment operator called." << std::endl;
	AMateria::_type = cp._type;
	return (*this);
}

AMateria *Cure::clone() const {
	return (new Cure(*this));
}
