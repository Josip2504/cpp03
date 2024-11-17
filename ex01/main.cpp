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
#include "ScavTrap.hpp"

int	main() {
	ClapTrap robot("Robot");
	ScavTrap human("Tom");

	robot.attack(human.getName());
	robot.takeDamage(5);
	robot.beRepaired(3);

	human.attack(robot.getName());
	human.guardGate();

	robot.attack(human.getName());

	return 0;
}