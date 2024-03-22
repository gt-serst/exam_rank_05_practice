/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 11:46:04 by gt-serst          #+#    #+#             */
/*   Updated: 2024/03/20 12:00:59 by gt-serst         ###   ########.fr       */
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
	for (std::map<std::string, ASpell*>::iterator it = this->_spell_book.begin(); it != this->_spell_book.end(); ++it)
		delete it->second;
	this->_spell_book.clear();
	return;
}

const std::string&	Warlock::getName(void) const{

	return (this->_name);
}

const std::string&	Warlock::getTitle(void) const{

	return (this->_title);
}

void	Warlock::setTitle(const std::string& title){

	this->_title = title;
}

void	Warlock::introduce(void) const{

	std::cout << getName() << ": I am " << getName() << ", " << getTitle() << "!" << std::endl;
}

void	Warlock::learnSpell(ASpell* spell){

	if (spell)
		if (this->_spell_book.find(spell->getName()) == this->_spell_book.end())
			this->_spell_book[spell->getName()] = spell->clone();
}

void	Warlock::forgetSpell(const std::string spell_name){

	std::map<std::string, ASpell*>::iterator it = this->_spell_book.find(spell_name);

	if (it != this->_spell_book.end())
	{
		delete it->second;
		this->_spell_book.erase(it);
	}
}

void	Warlock::launchSpell(const std::string spell_name, ATarget& target){

	if (this->_spell_book.find(spell_name) != this->_spell_book.end())
		this->_spell_book[spell_name]->launch(target);
}

