/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BrickWall.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 16:57:35 by gt-serst          #+#    #+#             */
/*   Updated: 2024/03/19 16:58:46 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BrickWall.hpp"

BrickWall::BrickWall(void) : ATarget("Inconspicuous Red-brick Wall"){

	return;
}

BrickWall::BrickWall(BrickWall const & src){

	*this = src;
	return;
}

BrickWall &	BrickWall::operator=(BrickWall const & rhs){

	if (this != &rhs)
	{
	}
	return (*this);
}

BrickWall::~BrickWall(void){

	return;
}

BrickWall*	BrickWall::clone(void) const{

	return (new BrickWall());
}
