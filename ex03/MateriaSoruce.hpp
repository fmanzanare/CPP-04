/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSoruce.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanzana <fmanzana@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 12:59:15 by fmanzana          #+#    #+#             */
/*   Updated: 2023/07/07 13:04:58 by fmanzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
	private:
		AMateria *_knowledge[4];
	public:
		MateriaSource();
		~MateriaSource();
		MateriaSource(const MateriaSource &cp);
		MateriaSource &operator=(const MateriaSource &cp);
		void learnMateria(AMateria *);
		AMateria *createMateria(std::string const &type);
};

#endif
