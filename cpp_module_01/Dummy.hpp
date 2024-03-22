/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 14:20:37 by gt-serst          #+#    #+#             */
/*   Updated: 2024/03/22 12:24:38 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DUMMY_HPP
# define DUMMY_HPP

#include "ATarget.hpp"

class Dummy : public ATarget{

	public:
		Dummy(void);
		Dummy(Dummy const & src);
		Dummy&				operator=(Dummy const & rhs);
		~Dummy(void);
		virtual ATarget*	clone(void) const;
};

#endif
