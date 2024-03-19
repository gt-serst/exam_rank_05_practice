/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 15:23:13 by gt-serst          #+#    #+#             */
/*   Updated: 2024/03/19 16:03:45 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dummy.hpp"

Dummy::Dummy(void) : ATarget("Target Practice Dummy"){

	return;
}

Dummy::Dummy(Dummy const & src){

	*this = src;
	return;
}

Dummy &	Dummy::operator=(Dummy const & rhs){

	if (this != &rhs)
	{
	}
	return (*this);
}

Dummy::~Dummy(void){

	return;
}

Dummy*	Dummy::clone(void) const{

	return (new Dummy());
}
