/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 16:59:08 by gt-serst          #+#    #+#             */
/*   Updated: 2024/03/19 17:33:23 by gt-serst         ###   ########.fr       */
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

	return;
}

void	SpellBook::learnSpell(ASpell* spell){

	if (spell)
		if (this->_spell_book.find(spell->getName()) == this->_spell_book.end())
			this->_spell_book[spell->getName()] = spell->clone();
}

void	SpellBook::forgetSpell(const std::string& spell_name){

	if (this->_spell_book.find(spell_name) != this->_spell_book.end())
		this->_spell_book.erase(this->_spell_book.find(spell_name));

}

ASpell*	SpellBook::createSpell(const std::string& spell_name){

	ASpell* tmp = NULL;
	if (this->_spell_book.find(spell_name) != this->_spell_book.end())
		tmp = this->_spell_book[spell_name];
	return (tmp);
}
