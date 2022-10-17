#pragma once

class game 
{
public:
	void InitApp();
	void Init();
	int Salle();

	string GetNextName();

public:
	string nomArmes[10];
	vector<string> nomRestants;

};

