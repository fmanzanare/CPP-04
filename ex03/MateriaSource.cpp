/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanzana <fmanzana@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 13:04:18 by fmanzana          #+#    #+#             */
/*   Updated: 2023/07/07 13:34:50 by fmanzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSoruce.hpp"

IMateriaSource::~IMateriaSource() {}

MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; i++) {
		this->_knowledge[i] = NULL;
	}
	// std::cout << "MateriaSource default constructor called." << std::endl;
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++) {
		if (this->_knowledge[i] != NULL) {
			delete this->_knowledge[i];
		}
	}
	// std::cout << "MateriaSource destructor called." << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &cp) {
	*this = cp;
	// std::cout << "MateriaSource copy constructor called." << std::endl;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &cp) {
	// std::cout << "MateriaSource assigment operator called." << std::endl;
	for (int i = 0; i < 4; i++) {
		if (this->_knowledge[i] != NULL) {
			delete this->_knowledge[i];
		}
	}
	for (int i = 0; i < 4; i++) {
		this->_knowledge[i] = cp._knowledge[i];
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria *m) {

	for (int i = 0; i < 4; i++) {
		if (this->_knowledge[i] == NULL) {
			this->_knowledge[i] = m;
			return ;
		}
	}
	std::cout << "MateriaSource knowledge is completely full." << std::endl;
}

AMateria *MateriaSource::createMateria(std::string const &type) {
	for (int i = 0; i < 4; i++) {
		if (this->_knowledge[i]->getType() == type) {
			return (this->_knowledge[i]->clone());
		}
	}
	std::cout << type + " has not been learned by this MateriaSource." << std::endl;
	return (NULL);
}
