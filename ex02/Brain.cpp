/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanzana <fmanzana@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 22:08:23 by fmanzana          #+#    #+#             */
/*   Updated: 2023/07/06 22:11:56 by fmanzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain default constructor called.\n";
}

Brain::~Brain() {
	std::cout << "Brain destructor called.\n";
}

Brain::Brain(const Brain &cp) {
	*this = cp;
	std::cout << "Brain copy constructor called.\n";
}

Brain &Brain::operator=(const Brain &cp) {
	std::cout << "Brain assigment operator called.\n";
	for (int i = 0; i < 100; i++) {
		this->_ideas[i] = cp._ideas[i];
	}
	return (*this);
}
