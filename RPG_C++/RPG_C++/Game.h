#pragma once

class game 
{
public:
	int Salle();
	void moove();

	void InitApp();
	void Init();
	
	void tabMonstre();
	void initMonstre();

	void tabArmor();
	void initArmor();

	string GetNextName();
	string newMonstre();
	string newArmor();


public:
	string nomArmes[10];
	vector<string> armeRestants;

	string nameMonster[10];
	vector<string> monsterRestants;

	string nameArmor[10];
	vector<string> armorRestants;
	string typeArmor[3];
	vector<string> typeRestants;

};

