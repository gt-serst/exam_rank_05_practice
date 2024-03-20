/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 14:15:47 by gt-serst          #+#    #+#             */
/*   Updated: 2024/03/20 10:43:42 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fwoosh.hpp"

Fwoosh::Fwoosh(void) : ASpell("Fwoosh", "fwooshed"){

	return;
}

Fwoosh::Fwoosh(Fwoosh const & src){

	*this = src;
	return;
}

Fwoosh &	Fwoosh::operator=(Fwoosh const & rhs){

	if (this != &rhs)
	{
	}
	return (*this);
}

Fwoosh::~Fwoosh(void){

	return;
}

ASpell*	Fwoosh::clone(void) const{

	return (new Fwoosh());
}
