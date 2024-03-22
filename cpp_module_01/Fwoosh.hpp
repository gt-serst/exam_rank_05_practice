/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 14:12:54 by gt-serst          #+#    #+#             */
/*   Updated: 2024/03/20 10:43:14 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FWOOSH_HPP
# define FWOOSH_HPP

# include "ASpell.hpp"

class Fwoosh : public ASpell{

	public:
		Fwoosh(void);
		Fwoosh(Fwoosh const & src);
		Fwoosh&			operator=(Fwoosh const & rhs);
		~Fwoosh(void);
		virtual ASpell*	clone(void) const;
};

#endif
