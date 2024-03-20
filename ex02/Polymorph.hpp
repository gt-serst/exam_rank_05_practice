/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorph.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 16:54:46 by gt-serst          #+#    #+#             */
/*   Updated: 2024/03/20 10:43:50 by gt-serst         ###   ########.fr       */
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
		virtual ASpell*	clone(void) const;
};

#endif
