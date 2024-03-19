/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fireball.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 16:52:54 by gt-serst          #+#    #+#             */
/*   Updated: 2024/03/19 16:54:24 by gt-serst         ###   ########.fr       */
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

Fireball*	Fireball::clone(void) const{

	return (new Fireball());
}
