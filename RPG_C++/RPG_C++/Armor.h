#pragma once
class Armor :public Entity
{
public:
	Armor();
	
	string getM_armorName();
	string getM_armorType();
	int getM_armorDefense();

public:
	string m_armorName;
	string m_armorType;
	int m_armorDefense;

};

