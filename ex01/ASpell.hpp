/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 12:21:47 by gt-serst          #+#    #+#             */
/*   Updated: 2024/03/20 12:03:58 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASPELL_HPP
# define ASPELL_HPP

# include <string>
# include "ATarget.hpp"

class ATarget;

class ASpell{

	public:
		ASpell(void);
		ASpell(std::string name, std::string effects);
		ASpell(ASpell const & src);
		ASpell&				operator=(ASpell const & rhs);
		virtual ~ASpell(void);
		const std::string&	getName(void) const;
		const std::string&	getEffects(void) const;
		virtual ASpell*		clone(void) const = 0;
		void				launch(ATarget const & obj) const;

	protected:
		std::string	name;
		std::string	effects;
};

#endif
