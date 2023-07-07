/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanzana <fmanzana@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 21:02:13 by fmanzana          #+#    #+#             */
/*   Updated: 2023/07/07 11:30:17 by fmanzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main(void) {
	//Example 01
	// const AAnimal* meta = new AAnimal();
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	// meta->makeSound();

	delete i;
	delete j;
	// delete meta;

	std::cout << std::endl;
	const WrongAnimal* wc = new WrongCat();
	std::cout << wc->getType() << " " << std::endl;
	wc->makeSound();

	delete wc;

	// Example 02.
	const AAnimal *arr[10];

	for (int i = 0; i < 10; i++) {
		if (i < 5)
			arr[i] = new Dog();
		else
			arr[i] = new Cat();
	}

	for (int i = 0; i < 10; i++) {
		delete arr[i];
	}

	return 0;
}
