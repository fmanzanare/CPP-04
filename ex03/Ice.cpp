/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanzana <fmanzana@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 11:48:51 by fmanzana          #+#    #+#             */
/*   Updated: 2023/07/07 13:36:18 by fmanzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() {
	AMateria::_type = "ice";
	// std::cout << "Ice default constructor called." << std::endl;
}

Ice::~Ice() {
	// std::cout << "Ice destructor called." << std::endl;
}

Ice::Ice(const Ice &cp) {
	*this = cp;
	// std::cout << "Ice copy constructor called." << std::endl;
}

Ice &Ice::operator=(const Ice &cp) {
	// std::cout << "Ice copy assigment operator called." << std::endl;
	AMateria::_type = cp._type;
	return (*this);
}

AMateria *Ice::clone() const {
	return (new Ice(*this));
}
