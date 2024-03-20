/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 17:17:15 by gt-serst          #+#    #+#             */
/*   Updated: 2024/03/20 12:05:17 by gt-serst         ###   ########.fr       */
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

	for (std::map<std::string, ATarget*>::iterator it = this->_target.begin(); it != this->_target.end(); ++it)
		delete it->second;
	this->_target.clear();
	return;
}

void	TargetGenerator::learnTargetType(ATarget* target){

	if (target)
		if (this->_target.find(target->getType()) == this->_target.end())
			this->_target[target->getType()] = target->clone();
}

void	TargetGenerator::forgetTargetType(std::string const & type){

	std::map<std::string, ATarget*>::iterator it = this->_target.find(type);

	if (it != this->_target.end())
	{
		delete it->second;
		this->_target.erase(it);
	}
}

ATarget*	TargetGenerator::createTarget(std::string const & type){

	ATarget* tmp = NULL;

	if (this->_target.find(type) != this->_target.end())
		tmp = this->_target[type];
	return (tmp);
}
