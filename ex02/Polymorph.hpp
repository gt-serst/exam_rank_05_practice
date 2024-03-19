/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorph.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 16:54:46 by gt-serst          #+#    #+#             */
/*   Updated: 2024/03/19 16:56:49 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POLYMORPH_HPP
# define POLYMORPH_HPP

# include "ASpell.hpp"

class Polymorph : public ASpell{

	public:
		Polymorph(void);
		Polymorph(Polymorph const & src);
		Polymorph&			operator=(Polymorph const & rhs);
		~Polymorph(void);
		virtual Polymorph*	clone(void) const;
};

#endif
