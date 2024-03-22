/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 11:44:07 by gt-serst          #+#    #+#             */
/*   Updated: 2024/03/22 12:37:37 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <string>
# include <map>
# include "ASpell.hpp"
# include "ATarget.hpp"
# include "SpellBook.hpp"

class Warlock{

	public:
		Warlock(std::string name, std::string title);
		~Warlock(void);
		const std::string&	getName(void) const;
		const std::string&	getTitle(void) const;
		void				setTitle(const std::string& title);
		void				introduce() const;
		void				learnSpell(ASpell* spell);
		void				forgetSpell(const std::string spell_name);
		void				launchSpell(const std::string spell_name, ATarget& target);

	private:
		Warlock(void);
		Warlock(Warlock const & src);
		Warlock &	operator=(Warlock const & rhs);
		std::string	_name;
		std::string	_title;
		SpellBook	_spell_book;
};

#endif
