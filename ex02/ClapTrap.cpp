/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsamardz <jsamardz@student.42heilnronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 15:55:34 by jsamardz          #+#    #+#             */
/*   Updated: 2024/11/13 15:55:34 by jsamardz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string& name) : name(name), hitPoints(10),
		energyPoints(10), attackDamage(0) {
	std::cout << "ClapTrap " << name << " created!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) : name(other.name), hitPoints(other.hitPoints),
		energyPoints(other.energyPoints), attackDamage(other.attackDamage) {
	std::cout << "ClapTrap " << other.name << " copied!" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
	if (this != &other) {
		name = other.name;
		hitPoints = other.hitPoints;
		attackDamage = other.attackDamage;
		energyPoints = other.energyPoints;
	}
	std::cout << "ClapTrap " << other.name << " assigned!" << std::endl;
	return *this;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap " << name <<" destroyed!" << std::endl;
}

void	ClapTrap::attack(const std::string &targer) {
	if (energyPoints > 0 && hitPoints > 0) {
		std::cout << "ClapTrap " << name << " attack " << targer << ", causing "
			<< attackDamage << " damage!" << std::endl;
		energyPoints--;
	}
	else
		std::cout << "ClapTrap " << name << " cannot attack!" << std::endl;
}

void	ClapTrap::takeDamage(int amount) {
	if (amount < 0) {
		std::cout << "ClapTrap " << name << " cannot take negative damage!" << std::endl;
		return ;
	}
	hitPoints -= amount;
	if (hitPoints < 0)
		hitPoints = 0;
	std::cout << "ClapTrap " << name << " takes " << amount 
		<< " damage!" << std::endl;
}

void	ClapTrap::beRepaired(int amount) {
	if (amount < 0) {
		std::cout << "ClapTrap " << name << " cannot repair negative amount!" << std::endl;
		return ;
	}
	if (energyPoints > 0 && hitPoints > 0) {
		hitPoints += amount;
		std::cout << "ClapTrap " << name << " repairs " << amount 
			<< " hit points!" << std::endl;
		energyPoints--;
	}
	else
		std::cout << "ClapTrap " << name << " cannot repair!" << std::endl;
}

std::string ClapTrap::getName() const {
	return name;
}

int	ClapTrap::getHitPoints() const {
	return hitPoints;
}

int	ClapTrap::getEnergyPoints() const {
	return energyPoints;
}

int	ClapTrap::getAttackDamage() const {
	return attackDamage;
}

void	ClapTrap::setName(const std::string& name) {
	this->name = name;
}

void	ClapTrap::setHitPoints(int hitPoints) {
	this->hitPoints = hitPoints;
}

void	ClapTrap::setEnergyPoints(int energyPoints) {
	this->energyPoints = energyPoints;
}

void	ClapTrap::setAttackDamage(int attackDamage) {
	this->attackDamage = attackDamage;
}