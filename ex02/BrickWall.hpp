/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BrickWall.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 16:57:12 by gt-serst          #+#    #+#             */
/*   Updated: 2024/03/20 10:43:22 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRICKWALL_HPP
# define BRICKWALL_HPP

#include "ATarget.hpp"

class BrickWall : public ATarget{

	public:
		BrickWall(void);
		BrickWall(BrickWall const & src);
		BrickWall&			operator=(BrickWall const & rhs);
		~BrickWall(void);
		virtual ATarget*	clone(void) const;
};

#endif
