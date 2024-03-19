/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 17:17:06 by gt-serst          #+#    #+#             */
/*   Updated: 2024/03/19 17:41:35 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TARGETGENERATOR_HPP
# define TARGETGENERATOR_HPP

# include <string>
# include "ATarget.hpp"
# include <map>

class TargetGenerator{

	public:
		TargetGenerator(void);
		~TargetGenerator(void);
		void		learnTargetType(ATarget* target);
		void		forgetTargetType(std::string const & type);
		ATarget*	createTarget(std::string const & type);
	
	private:
		TargetGenerator(TargetGenerator const & src);
		TargetGenerator &	operator=(TargetGenerator const & rhs);
		std::map < std::string, ATarget*> _target;
};

#endif
