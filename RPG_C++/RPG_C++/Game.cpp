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

	nameMonster[0] = "monstre 1";
	nameMonster[1] = "monstre 2";
	nameMonster[2] = "monstre 3";
	nameMonster[3] = "monstre 4";
	nameMonster[4] = "monstre 5";
	nameMonster[5] = "monstre 6";
	nameMonster[6] = "monstre 7";
	nameMonster[7] = "monstre 8";
	nameMonster[8] = "monstre 9";
	nameMonster[9] = "monstre 10";

	nameArmor[0] = "Armor 1";
	nameArmor[1] = "Armor 2";
	nameArmor[2] = "Armor 3";
	nameArmor[3] = "Armor 4";
	nameArmor[4] = "Armor 5";
	nameArmor[5] = "Armor 6";
	nameArmor[6] = "Armor 7";
	nameArmor[7] = "Armor 8";
	nameArmor[8] = "Armor 9";
	nameArmor[9] = "Armor 10";

	typeArmor[0] = "casque";
	typeArmor[1] = "plastron";
	typeArmor[2] = "bottes";

}

//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// ARMOR :

void game::initArmor()
{
	vector<int>indexes_armor;
	for (int i = 0; i < 10; i++)
	{
		indexes_armor.push_back(i);
		cout << "indexes_armor : " << indexes_armor[i] << endl;
	}

	vector<int>indexes_type;
	for (int i = 0; i < 3; i++)
	{
		indexes_type.push_back(i);
		cout << "indexes_type : " << indexes_type[i] << endl;
	}
	armorRestants.clear();

	for (int i = 0; i < 10; i++)
	{
		int indexA = rand() % indexes_armor.size();

		int val = indexes_armor[indexA];

		armorRestants.push_back(nameArmor[val]);
		indexes_armor.erase(indexes_armor.begin() + indexA);
		cout << "armor Restantss : " << armorRestants[i] << endl;

	}

	for (int i = 0; i < 10; i++)
	{
		int indexType = rand() % indexes_type.size();

		int val = indexes_type[indexType];

		typeRestants.push_back(typeArmor[val]);
		cout << "type Restants : " << typeRestants[i] << endl;

	}

}

string game::newArmor()
{
	if (armorRestants.size() == 0 && typeArmor->size() == 0)
	{
		return "";
	}

	string nomArmor = armorRestants[armorRestants.size() - 1];
	monsterRestants.pop_back();
	return nomArmor;
	cout << "cc" << endl;
}



//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// MONSTRES : 


void game::initMonstre()
{
	vector<int>indexes_monstre;
	for (int i = 0; i < 10; i++)
	{
		indexes_monstre.push_back(i);
		cout << "indexes_monstre : " << indexes_monstre[i] << endl;
	}
	monsterRestants.clear();

	for (int i = 0; i < 10; i++)
	{
		int indexM = rand() % indexes_monstre.size();

		int val = indexes_monstre[indexM];

		monsterRestants.push_back(nameMonster[val]);
		indexes_monstre.erase(indexes_monstre.begin() + indexM);
		cout << "monstres restants : " << monsterRestants[i] << endl;

	}
}


string game::newMonstre()
{
	if (monsterRestants.size() == 0)
	{
		return "";
	}
		
	string nomMonstre = monsterRestants[monsterRestants.size() - 1];
	monsterRestants.pop_back();
	return nomMonstre;
}




//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// ARME :



void game::Init()
{

	vector<int> indexes;
	for (int i = 0; i < 10; i++)
	{
		indexes.push_back(i);
		cout << "index : " << indexes[i] << endl;
	}
		
	armeRestants.clear();

	for (int i = 0; i < 10; i++)
	{
		int index = rand() % indexes.size();

		int val = indexes[index];

		armeRestants.push_back(nomArmes[val]);
		indexes.erase(indexes.begin() + index);
		cout << "nom restants : " << armeRestants[i] << endl;

	}

}

string game::GetNextName()
{
	if (armeRestants.size() == 0)
		return "";
	string nom = armeRestants[armeRestants.size() - 1];
	armeRestants.pop_back();
	return nom;
}


//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// SALLE :

int game::Salle() {
	int nombreSalle = 0;
	int vitesseAtq = 0;
	int vitesseMAtq = 0;
	int restart = 1;
	srand(time(NULL));

	nombreSalle = 0;
	Player* m_pHero = new Player();
	Monstre* m_pMonstre = new Monstre();
	if (nombreSalle == 0)
	{
		if (m_pMonstre->get_Pv() == 0)
		{
			cout << "Le monstre a déjà était battu\n";
			cout << "Veuillez choisir une direction";
		}
		cout << "Il y'a un " << m_pMonstre->get_name() << " la\n";
		cout << "Voulez vous combattre contre le monstre ? y or n \n";

		char response = 0;

		if (nombreSalle == 0) {
			cout << "Il y'a un " << m_pMonstre->get_name() << " la\n";
			cout << "Voulez vous vous battre contre le monstre ? \n";
			char response;
			cin >> response;

			switch (response)
			{
			case 'y':
			case 'Y':
				cout << "Let's go fight\n";
				system("pause>nul");

				while (m_pMonstre->get_Pv() != 0 && m_pHero->get_Pv() != 0)
				{
					vitesseAtq = rand() % 2;
					if (vitesseAtq == 0)
					{
						m_pMonstre->Hurt(m_pHero->get_Atk());
						cout << "Vous lui infligez " << m_pHero->get_Atk() << " degats. \n";
						cout << "Il reste " << m_pMonstre->get_Pv() << " PV a " << m_pMonstre->get_name() << "\n";
						if (m_pMonstre->get_Pv() == 0)
						{
							cout << "Vous avez win\n";
							cout << "Veuillez choisir votre prochaine direction";
							cin >> response;
							switch (response)
							{
							case 'n':
							case 'N':
								nombreSalle = 1;
								break;
							case 'e':
							case 'E':
								nombreSalle = 2;
								break;
							case 'o':
							case 'O':
								nombreSalle = 3;
								break;
							case 's':
							case 'S':
								nombreSalle = 4;
								break;
							}
						}
					}
					else
					{
						cout << "Vous avez louper votre attaque.\n";
					}
					system("pause>nul");

					while (m_pMonstre->get_Pv() != 0 && m_pHero->get_Pv() != 0) {
						vitesseAtq = rand() % 2;
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
						if (vitesseMAtq == 0)
						{
							m_pHero->Hurt(m_pMonstre->get_Atk());
							cout << "Le monstre t'attaque \n";
							cout << "Il vous reste " << m_pHero->get_Pv() << " PV\n";
							if (m_pHero->get_Pv() == 0)
							{
								cout << "GAME OVER";
								break;
							}
						}
						else
						{
							cout << "Il a louper son attaque.\n";
						}
						system("pause>nul");
					}
					break;

			case 'n':
			case 'N':
				cout << "Veuillez choisir votre prochaine direction";
				cin >> response;
				switch (response)
				{
				case 'n':
				case 'N':
					nombreSalle = 1;
					break;
				case 'e':
				case 'E':
					nombreSalle = 2;
					break;
				case 'o':
				case 'O':
					nombreSalle = 3;
					break;
				case 's':
				case 'S':
					nombreSalle = 4;
					break;
				}
			default:
				cout << "Choix incorrecte\n";
				break;
				}
			}
			if (nombreSalle == 1) {
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
	}
}

void game::moove()
{
	Room* pMap = new Room;
	pMap->printGrid();


};
