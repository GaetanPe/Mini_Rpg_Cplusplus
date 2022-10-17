#pragma once

class Room
{
public:
	Room();
	virtual ~Room();

	void printGrid();
	void createMonster();
	void createSword();
	void createArmor();

public:
	Monstre* m_monstre;
	Arme* m_sword;
	Armor* m_armor;
};

