/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 16:59:08 by gt-serst          #+#    #+#             */
/*   Updated: 2024/03/20 10:59:57 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SpellBook.hpp"
#include <string>

SpellBook::SpellBook(void){

	return;
}

SpellBook::SpellBook(SpellBook const & src){

	*this = src;
	return;
}

SpellBook &	SpellBook::operator=(SpellBook const & rhs){

	if (this != &rhs)
		this->_spell_book = rhs._spell_book;
	return (*this);
}

SpellBook::~SpellBook(void){

	for (std::map<std::string, ASpell*>::iterator it = this->_spell_book.begin(); it != this->_spell_book.end(); ++it)
		delete it->second;
	this->_spell_book.clear();
	return;
}

void	SpellBook::learnSpell(ASpell* spell){

	if (spell)
		if (this->_spell_book.find(spell->getName()) == this->_spell_book.end())
			this->_spell_book[spell->getName()] = spell->clone();
}

void	SpellBook::forgetSpell(const std::string& spell_name){

	std::map<std::string, ASpell*>::iterator it = this->_spell_book.find(spell_name);

	if (it != this->_spell_book.end())
	{
		delete it->second;
		this->_spell_book.erase(it);
	}
}

ASpell*	SpellBook::createSpell(const std::string& spell_name){

	ASpell* tmp = NULL;

	if (this->_spell_book.find(spell_name) != this->_spell_book.end())
		tmp = this->_spell_book[spell_name];
	return (tmp);
}
