#pragma once

class Room
{
public:
	Room();
	virtual ~Room();

	void printGrid();
    int GetX() { return m_x; }
    int GetY() { return m_y; }
    void AddX(int x);
    void AddY(int y);
    int GetCell(int x, int y);
    int GetIndex(int x, int y);
	void createMonster();
	void createSword();
	void createArmor();

public:
	Monstre* m_monstre;
	Arme* m_sword;
	Armor* m_armor;
private:
    int m_x;
    int m_y;
    int MapCounter;
    int* m_map;
};

