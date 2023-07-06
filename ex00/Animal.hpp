/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanzana <fmanzana@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 20:14:06 by fmanzana          #+#    #+#             */
/*   Updated: 2023/07/06 21:27:43 by fmanzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {
	protected:
		std::string	_type;
	public:
		Animal();
		virtual ~Animal();
		Animal(const Animal &cp);
		Animal &operator=(const Animal &cp);
		virtual void makeSound() const;
		std::string getType() const;
};

#endif
