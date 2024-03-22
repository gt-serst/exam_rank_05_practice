/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 13:59:34 by gt-serst          #+#    #+#             */
/*   Updated: 2024/03/20 12:04:16 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ATARGET_HPP
# define ATARGET_HPP

# include <string>
# include "ASpell.hpp"

class ASpell;

class ATarget{

	public:
		ATarget(void);
		ATarget(std::string type);
		ATarget(ATarget const & src);
		ATarget&			operator=(ATarget const & rhs);
		virtual ~ATarget(void);
		const std::string&	getType(void) const;
		virtual ATarget*	clone(void) const = 0;
		void				getHitBySpell(ASpell const & obj) const;

	protected:
		std::string	type;
};

#endif
