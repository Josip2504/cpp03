/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsamardz <jsamardz@student.42heilnronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 16:32:23 by jsamardz          #+#    #+#             */
/*   Updated: 2024/11/19 16:32:23 by jsamardz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string& name) : ClapTrap(name) {
	setHitPoints(100);
	setEnergyPoints(100);
	setAttackDamage(30);
	std::cout << "FragTrap " << getName() << " created!" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other) {
	setHitPoints(other.getHitPoints());
	setEnergyPoints(other.getEnergyPoints());
	setAttackDamage(other.getAttackDamage());
	std::cout << "FragTrap " << getName() << " copied" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other) {
	if (this != &other) {
		ClapTrap::operator=(other);
		setHitPoints(other.getHitPoints());
		setEnergyPoints(other.getEnergyPoints());
		setAttackDamage(other.getAttackDamage());
	}
	std::cout << "FragTrap " << getName() << " assigned" << std::endl;
	return *this;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << getName() << " destroyed" << std::endl;
}

void	FragTrap::attack(const std::string& target) {
	if (getEnergyPoints() > 0 && getHitPoints() > 0) {
		setEnergyPoints(getEnergyPoints() - 1);
		std::cout << "FragTrap " << getName() << " attacked " << target
			<< ", causing " << getAttackDamage() << " damage!" << std::endl;
	} else
		std::cout << "FragTrap " << getName() << " has no energy points" << std::endl;
}

void	FragTrap::highFiveGuys() {
	std::cout << "FragTrap " << getName() << " wants to high five from everyone!" << std::endl;
}