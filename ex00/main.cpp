/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsamardz <jsamardz@student.42heilnronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 15:55:12 by jsamardz          #+#    #+#             */
/*   Updated: 2024/11/13 15:55:12 by jsamardz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main() {
	ClapTrap robot("Robot");
	ClapTrap human("Tom");

	robot.attack(human.getName());
	robot.takeDamage(5);
	robot.beRepaired(3);

	return 0;
}