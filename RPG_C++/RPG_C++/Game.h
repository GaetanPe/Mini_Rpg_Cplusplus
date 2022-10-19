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

	string GetNextName();
	string newMonstre();

public:
	string nomArmes[10];
	vector<string> armeRestants;

	string nameMonster[10];
	vector<string> monsterRestants;

};

