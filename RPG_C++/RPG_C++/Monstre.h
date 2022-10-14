#pragma once
class Monstre
{
public:
	Monstre();
	virtual ~Monstre();

	string getM_Name();
	int getM_Pv();
	int getM_Atk();
	int Hurt(int pv);
public:
	int m_atk = 1;
	int m_pv = 10;
	string m_name = "Homonculus";
};