/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 17:17:06 by gt-serst          #+#    #+#             */
/*   Updated: 2024/03/22 12:36:52 by gt-serst         ###   ########.fr       */
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
		void		forgetTargetType(const std::string& type);
		ATarget*	createTarget(const std::string& type);

	private:
		TargetGenerator(TargetGenerator const & src);
		TargetGenerator &	operator=(TargetGenerator const & rhs);
		std::map < std::string, ATarget*> _target;
};

#endif
