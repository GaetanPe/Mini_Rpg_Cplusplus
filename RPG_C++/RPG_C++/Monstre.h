#pragma once
class Monstre : public Entity
{
public:
	Monstre();
	virtual ~Monstre();

	string getM_Name();
	int getM_Pv();
	int getM_Atk();
	int Hurt(int pv);
};