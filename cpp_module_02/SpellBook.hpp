/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 16:58:54 by gt-serst          #+#    #+#             */
/*   Updated: 2024/03/22 12:36:01 by gt-serst         ###   ########.fr       */
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
		void	learnSpell(ASpell* spell);
		void	forgetSpell(const std::string& spell_name);
		ASpell*	createSpell(const std::string& spell_name);

	private:
		SpellBook(SpellBook const & src);
		SpellBook &	operator=(SpellBook const & rhs);
		std::map<std::string, ASpell*>	_spell_book;
};

#endif
