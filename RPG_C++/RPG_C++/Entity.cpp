#include "Framework.h"

string Entity ::get_name()
{
	return m_name;

}

int Entity::Hurt(int pv)
{

	m_pv -= pv;
	if (m_pv <= 0)
	{
		m_pv = 0;

	}
	return m_pv;

}
int Entity::get_Pv()
{
	return m_pv;
}

int Entity::get_Atk()
{
	/*Prendre la valeur de l'arme actuellement porté*/
	return m_atk;
}
