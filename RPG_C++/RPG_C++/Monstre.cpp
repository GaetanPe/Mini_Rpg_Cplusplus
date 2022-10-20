#include "Framework.h"
#include "Monstre.h"

Monstre::Monstre()
{
	m_y = 0;
	m_x = 0;
};

Monstre::~Monstre()
{

}

void Monstre::AddX(int x)
{
	m_x += x;
}

void Monstre::AddY(int y)
{
	m_y += y;
}




