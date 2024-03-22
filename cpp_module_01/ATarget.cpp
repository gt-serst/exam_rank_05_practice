/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 14:00:21 by gt-serst          #+#    #+#             */
/*   Updated: 2024/03/19 16:05:48 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ATarget.hpp"
#include <string>
#include <iostream>

ATarget::ATarget(void){

	return;
}

ATarget::ATarget(std::string type) : type(type){

	return;
}

ATarget::ATarget(ATarget const & src){

	*this = src;
	return;
}

ATarget &	ATarget::operator=(ATarget const & rhs){

	if (this != &rhs)
		this->type = rhs.type;
	return (*this);
}

ATarget::~ATarget(void){

	return;
}

const std::string&	ATarget::getType(void) const{

	return (this->type);
}

void	ATarget::getHitBySpell(ASpell const & obj) const{

	std::cout << getType() << " has been " << obj.getEffects() << "!" << std::endl;
}
