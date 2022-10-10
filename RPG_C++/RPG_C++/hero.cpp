#include <iostream>
#include "hero.h"
using namespace std;

string hero::AskName() {
	char name[100];
	cout << "Bienvenue, veuillez entrer votre pseudo -> ";
	cin >> name;
	m_name = name;
	cout << "Votre nom est " << m_name << ".";
	
	return name;
}