/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 13:51:20 by gt-serst          #+#    #+#             */
/*   Updated: 2024/03/19 17:40:23 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"
#include <string>

ASpell::ASpell(void){

	return;
}

ASpell::ASpell(std::string name, std::string effects) : name(name), effects(effects){

	return;		
}

ASpell::ASpell(ASpell const & src){

	*this = src;
	return;
}

ASpell &	ASpell::operator=(ASpell const & rhs){

	if (this != &rhs)
	{
		this->name = rhs.name;
		this->effects = rhs.effects;
	}
	return (*this);
}

ASpell::~ASpell(void){

	return;
}

std::string	ASpell::getName(void) const{

	return (this->name);
}

std::string	ASpell::getEffects(void) const{

	return (this->effects);
}

void	ASpell::launch(ATarget const & obj) const{

	obj.getHitBySpell(*this);
}
