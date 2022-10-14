#include "Framework.h"


Monstre::Monstre()
{
	
};

Monstre::~Monstre()
{

}

string Monstre::getM_Name()
{
	return m_name;

}

int Monstre::getM_Pv()
{
	
	return m_pv;
}
int Monstre::getM_Atk()
{
	return m_atk;
}
int Monstre::Hurt(int pv)
{

	m_pv -= pv;
	if (m_pv <= 0)
	{
		m_pv = 0;

	}
	return m_pv;

}