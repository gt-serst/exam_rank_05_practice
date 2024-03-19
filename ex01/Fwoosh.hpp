/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 14:12:54 by gt-serst          #+#    #+#             */
/*   Updated: 2024/03/19 15:53:09 by gt-serst         ###   ########.fr       */
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
		virtual Fwoosh*	clone(void) const;
};

#endif
