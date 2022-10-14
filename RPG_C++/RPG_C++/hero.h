#pragma once


class hero 
{
public:
	string AskName();
	int get_Pv();
	int get_Atk();
	int Hurt(int pv);
public:
	string m_name = "";
	int m_pv = 20;
	int m_atk = 5;
	int m_def = 0;
};
