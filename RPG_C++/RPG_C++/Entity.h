#pragma once

class Entity
{
public:
	int get_Pv();
	int get_Atk();
	string get_name();
	int Hurt(int pv);


public:
	string m_name;
	int m_pv;
	int m_atk;
	int m_def;

	
};

