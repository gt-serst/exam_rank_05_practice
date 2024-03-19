/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 11:46:04 by gt-serst          #+#    #+#             */
/*   Updated: 2024/03/19 13:54:07 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"
#include <string>
#include <iostream>

Warlock::Warlock(void){

	return;
}

Warlock::Warlock(std::string name, std::string title) : _name(name), _title(title){

	std::cout << getName()  << ": This looks like another boring day." << std::endl;
	return;
}

Warlock::Warlock(Warlock const & src){

	*this = src;
	return;
}

Warlock &	Warlock::operator=(Warlock const & rhs){

	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_title = rhs._title;
	}
	return (*this);
}

Warlock::~Warlock(void){

	std::cout << getName() << ": My job here is done!" << std::endl;
	return;
}

std::string	Warlock::getName(void) const{

	return (this->_name);
}

std::string	Warlock::getTitle(void) const{

	return (this->_title);
}

void	Warlock::setTitle(const std::string& title){

	this->_title = title;
}

void	Warlock::introduce(void) const{

	std::cout << getName() << ": I am " << getName() << ", " << getTitle() << "!" << std::endl;
}

