/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 17:17:15 by gt-serst          #+#    #+#             */
/*   Updated: 2024/03/19 17:43:43 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TargetGenerator.hpp"
#include <string>

TargetGenerator::TargetGenerator(void){

	return;
}

TargetGenerator::TargetGenerator(TargetGenerator const & src){

	*this = src;
	return;
}

TargetGenerator &	TargetGenerator::operator=(TargetGenerator const & rhs){

	if (this != &rhs)
	{
	}
	return (*this);
}

TargetGenerator::~TargetGenerator(void){

	return;
}

void	TargetGenerator::learnTargetType(ATarget* target){

	if (target)
		this->_target[target->getType()] = target->clone();
}

void	TargetGenerator::forgetTargetType(std::string const & type){

	if (this->_target.find(type) != this->_target.end())
		this->_target.erase(this->_target.find(type));
}

ATarget*	TargetGenerator::createTarget(std::string const & type){

	ATarget* tmp = NULL;
	if (this->_target.find(type) != this->_target.end())
		tmp = this->_target[type];
	return (tmp);
}
