/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fireball.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 16:52:31 by gt-serst          #+#    #+#             */
/*   Updated: 2024/03/20 12:00:04 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIREBALL_HPP
# define FIREBALL_HPP

# include "ASpell.hpp"

class Fireball : public ASpell{

	public:
		Fireball(void);
		Fireball(Fireball const & src);
		Fireball&		operator=(Fireball const & rhs);
		~Fireball(void);
		virtual ASpell*	clone(void) const;
};

#endif
