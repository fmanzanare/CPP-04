/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanzana <fmanzana@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 11:07:10 by fmanzana          #+#    #+#             */
/*   Updated: 2023/07/07 13:56:18 by fmanzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() {
	this->_type = "None";
	// std::cout << "AMateria default constructor called." << std::endl;
}

AMateria::AMateria(std::string const &type) {
	this->_type = type;
	// std::cout << "AMateria constructor called." << std::endl;
}

AMateria::~AMateria() {
	// std::cout << "AMateria destructor called." << std::endl;
}

AMateria::AMateria(const AMateria &cp) {
	*this = cp;
	// std::cout << "AMateria copy constructor called." << std::endl;
}

AMateria &AMateria::operator=(const AMateria &cp) {
	// std::cout << "AMateria assigment operator called." << std::endl;
	this->_type = cp._type;
	return (*this);
}

std::string const &AMateria::getType() const {
	return (this->_type);
}

void	AMateria::use(ICharacter &target) {
	if (this->_type == "ice") {
		std::cout << "* shoots an ice bolt at " + target.getName() + " *" << std::endl;
	} else if (this->_type == "cure") {
		std::cout << "* heals " + target.getName() + "'s wounds *" << std::endl;
	}
}
