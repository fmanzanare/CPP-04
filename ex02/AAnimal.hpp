/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanzana <fmanzana@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 20:14:06 by fmanzana          #+#    #+#             */
/*   Updated: 2023/07/07 11:09:47 by fmanzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

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
