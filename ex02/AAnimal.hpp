/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanzana <fmanzana@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 20:14:06 by fmanzana          #+#    #+#             */
/*   Updated: 2023/07/07 10:58:48 by fmanzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class AAnimal {
	protected:
		std::string	_type;
		AAnimal();
	public:
		virtual ~AAnimal();
		AAnimal(const AAnimal &cp);
		AAnimal &operator=(const AAnimal &cp);
		virtual void makeSound() const = 0;
		std::string getType() const;
};

#endif
