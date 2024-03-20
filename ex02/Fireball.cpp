/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fireball.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 16:52:54 by gt-serst          #+#    #+#             */
/*   Updated: 2024/03/20 10:43:34 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fireball.hpp"

Fireball::Fireball(void) : ASpell("Fireball", "burnt to a crisp"){

	return;
}

Fireball::Fireball(Fireball const & src){

	*this = src;
	return;
}

Fireball &	Fireball::operator=(Fireball const & rhs){

	if (this != &rhs)
	{
	}
	return (*this);
}

Fireball::~Fireball(void){

	return;
}

ASpell*	Fireball::clone(void) const{

	return (new Fireball());
}
