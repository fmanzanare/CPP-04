/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanzana <fmanzana@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 21:48:56 by fmanzana          #+#    #+#             */
/*   Updated: 2023/07/06 21:57:26 by fmanzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
	WrongAnimal::_type = "WrongCat";
	std::cout << "WrongCat default constructor called.\n";
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat destructor called.\n";
}

WrongCat::WrongCat(const WrongCat &cp) {
	*this = cp;
	std::cout << "WrongCat copy constructor called.\n";
}

WrongCat &WrongCat::operator=(const WrongCat &cp) {
	std::cout << "WrongCat assigment operator called.\n";
	WrongAnimal::_type = cp._type;
	return (*this);
}

void WrongCat::makeSound() const {
	std::cout << "Kikiriki!!!\n";
}
