#include "Hero.h"
#include "Clear.h"


string hero::AskName() {
	char name[100];
	cout << "Bienvenue, veuillez entrer votre pseudo -> ";
	cin >> name;
	m_name = name;
	Clear clear;
	clear.clearConsole();
	return name;
}