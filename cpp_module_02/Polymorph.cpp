/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorph.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 16:55:12 by gt-serst          #+#    #+#             */
/*   Updated: 2024/03/20 10:43:53 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Polymorph.hpp"

Polymorph::Polymorph(void) : ASpell("Polymorph", "turned into a critter"){

	return;
}

Polymorph::Polymorph(Polymorph const & src){

	*this = src;
	return;
}

Polymorph &	Polymorph::operator=(Polymorph const & rhs){

	if (this != &rhs)
	{
	}
	return (*this);
}

Polymorph::~Polymorph(void){

	return;
}

ASpell*	Polymorph::clone(void) const{

	return (new Polymorph());
}
