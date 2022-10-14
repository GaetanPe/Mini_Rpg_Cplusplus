#include "Framework.h"


string hero::AskName() {
	char name[100];
	cout << "Bienvenue, veuillez entrer votre pseudo -> ";
	cin >> name;
	m_name = name;
	cout << m_name << " vous allez rentrer dans la salle a votre droite.\n";
	return name;
}



int hero :: get_Pv()
{
	return m_pv;
}

int hero:: get_Atk()
{
	/*Prendre la valeur de l'arme actuellement porté*/
	return m_atk;
}

int hero::Hurt(int pv)
{

	m_pv -= pv;
	if (m_pv <= 0)
	{
		m_pv = 0;

	}
	return m_pv;

}