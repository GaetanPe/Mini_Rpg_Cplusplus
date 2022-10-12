#include <iostream>
#include "Hero.h"
#include<cstdlib>
using namespace std;

string hero::AskName() {
	char name[100];
	cout << "Bienvenue, veuillez entrer votre pseudo -> ";
	cin >> name;
	m_name = name;
	system("cls");
	
	return name;
}