/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 16:58:54 by gt-serst          #+#    #+#             */
/*   Updated: 2024/03/19 17:39:51 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPELLBOOK_HPP
# define SPELLBOOK_HPP

# include <string>
# include "ASpell.hpp"
# include <map>

class SpellBook{

	public:
		SpellBook(void);
		~SpellBook(void);
		void		learnSpell(ASpell* spell);
		void		forgetSpell(const std::string& spell_name);
		ASpell*		createSpell(std::string const & spell_name);

	private:	
		SpellBook(SpellBook const & src);
		SpellBook &	operator=(SpellBook const & rhs);
		std::map<std::string, ASpell*>	_spell_book;
};

#endif
