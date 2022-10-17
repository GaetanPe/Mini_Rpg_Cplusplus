#include "Framework.h"

void game::InitApp()
{
	nomArmes[0] = "Joyeuse";
	nomArmes[1] = "Excalibur";
	nomArmes[2] = "Epee en fer";
	nomArmes[3] = "katana";
	nomArmes[4] = "Master Sword";
	nomArmes[5] = "Nadur";
	nomArmes[6] = "Keyblade";
	nomArmes[7] = "Buster Sword";
	nomArmes[8] = "Frostmourne";
	nomArmes[9] = "Soul Edge";

	for (int i=0; i < 10; i++)
	{
		cout << nomArmes[i] << endl;
	}
}

void game::Init()
{
	//nomRestants.clear();
	//for (int i = 0; i < 10; i++)
	//	nomRestants.push_back(nomArmes[i]);

	vector<int> indexes;
	for (int i = 0; i < 10; i++)
	{
		indexes.push_back(i);
		cout << "index : " << indexes[i] << endl;
	}
		
	nomRestants.clear();

	for (int i = 0; i < 10; i++)
	{
		int index = rand() % indexes.size();
		//cout << " Index : " << index << endl;

		int val = indexes[index];
		//cout << "val : " << val << endl;

		nomRestants.push_back(nomArmes[val]);
		indexes.erase(indexes.begin() + index);
		cout << "nom restants : " << nomRestants[i] << endl;

	}

}

string game::GetNextName()
{
	if (nomRestants.size() == 0)
		return "";
	string nom = nomRestants[nomRestants.size() - 1];
	nomRestants.pop_back();
	return nom;
}





int game::Salle() {
	int nombreSalle = 0;
	int vitesseAtq = 0;
	int vitesseMAtq = 0;

	srand(time(NULL));

	nombreSalle = 0;
	hero* m_pHero = new hero();
	Monstre* m_pMonstre = new Monstre();

	if (nombreSalle == 0) {
		cout << "Il y'a un " << m_pMonstre->get_name() << " la\n";
		cout << "Voulez vous vous battre contre le monstre ? \n";
		char response;
		cin >> response;

		switch (response) {
		case 'y':
		case 'Y':
			cout << "Let's go fight\n";
			system("pause>nul");
			
			while(m_pMonstre->get_Pv() != 0 && m_pHero->get_Pv() != 0){
			vitesseAtq =  rand() %2;
			if (vitesseAtq == 0) {
				m_pMonstre->Hurt(m_pHero->get_Atk());
				cout << "Vous lui infligez des degats. \n";
				cout << "Il reste " << m_pMonstre->get_Pv() << " PV a " << m_pMonstre->get_name() << "\n";
			}
			else {
				cout << "Vous avez louper votre attaque.\n";
			}
			system("pause>nul");

			vitesseMAtq = rand() % 3;
			if (vitesseMAtq == 0) {
				m_pHero->Hurt(m_pMonstre->get_Atk());
				cout << "Le monstre t'attaque \n";
				cout << "Il vous reste " << m_pHero->get_Pv() << " PV " << "\n";
			}
			else  {
				cout << "Il a louper son attaque.\n";
			}
			system("pause>nul");
			}
			break;

		case 'n':
		case 'N':
			cout << "Veuillez choisir la prochaine salle\n";
			break;
		default:
			cout << "Choix incorrecte\n";
			break;
		}


	}
	else if (nombreSalle == 1) {
		cout << "Il y'a un tresor la\n";
	}
	else if (nombreSalle == 2) {
		cout << "Il y'a une arme par terre\n";
	}
	else if (nombreSalle == 3) {
		cout << "Il y'a une armures par terre\n";
	}


	return vitesseMAtq;
	return vitesseAtq;
	return nombreSalle;
}
