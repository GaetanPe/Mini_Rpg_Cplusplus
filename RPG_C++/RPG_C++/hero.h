#pragma once

class hero: public Entity
{
public:
	string AskName();
	int get_Pv();
	int get_Atk();
	int Hurt(int pv);
};
