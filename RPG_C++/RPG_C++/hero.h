#include "Framework.h"
#include "Entity.h"

class hero : Entity
{
public:
	string AskName();

public:
	string m_name = "";
	int m_hero_pv = 20;
	int m_hero_atk = 5;
	int m_hero_def = 0;
};
