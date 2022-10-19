#include "Framework.h"
#include <vector>

using std::vector;

Room::Room()
{
    m_monstre = NULL;
    m_sword = NULL;
    m_armor = NULL;
}

Room::~Room()
{
    delete m_monstre;
}

void Room::printGrid() {
    Player* m_pPlayer = new Player(29, 14);
	Monstre* m_pMonstre = new Monstre(9, 14);
	Room* pMap = new Room;
	int mapCounter = 0;

    for (int y = 0; y < 30; y++) {

        for (int x = 0; x < 60; x++) {

			if (m_pPlayer->GetX() == x && m_pPlayer->GetY() == y)
			{
				cout << "X";
				continue;
			}
			else if (m_pMonstre->GetX() == x && m_pMonstre->GetY() == y)
			{
				cout << "?";
				continue;
			}
			else if (x == 9 && y == 9 || x == 49 && y == 9 || x == 29 && y == 9 || x == 9 && y == 19 || x == 49 && y == 19 || x == 29 && y == 19 || x == 19 && y == 4 || x == 39 && y == 4 || x == 19 && y == 14 || x == 39 && y == 14 || x == 19 && y == 24 || x == 39 && y == 24)
				cout << " ";
            else if (x == 8 && y == 9 || x == 10 && y == 9 || x == 28 && y == 9 || x == 30 && y == 9 || x == 48 && y == 9 || x == 50 && y == 9 || x == 8 && y == 19 || x == 10 && y == 19 || x == 28 && y == 19 || x == 30 && y == 19 || x == 48 && y == 19 || x == 50 && y == 19)
				cout << "|";
			else if (x == 19 && y == 3 || x == 19 && y == 5 || x == 39 && y == 3 || x == 39 && y == 5 || x == 19 && y == 13 || x == 19 && y == 15 || x == 39 && y == 13 || x == 39 && y == 15 || x == 19 && y == 23 || x == 19 && y == 25 || x == 39 && y == 23 || x == 39 && y == 25 )
				cout << "-";
			else if (y == 0 || y == 9 || y == 19 || y == 29 || y == 39)
                cout << "-";
            else if (x == 0 || x == 19 || x == 39 || x == 59)
                cout << "|";
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }
	bool running = true;
	while (running)
	{
		int v;
		cout << "Ou voulez-vous aller ?\n"
			"1-haut\n"
			"2-gauche\n"
			"3-droite\n"
			"4-bas\n";
			"0-retour\n";
		cin >> v;
		if (v == 1)
		{
			m_pPlayer->AddY(-10);
			system("cls");
			if (m_pPlayer->GetY() <= 0)
			{ 
				m_pPlayer->AddY(10);
			}
			for (int y = 0; y < 30; y++) {

				for (int x = 0; x < 60; x++) {

					if (m_pPlayer->GetX() == x && m_pPlayer->GetY() == y)
					{
						cout << "X";
						continue;
					}
					else if (m_pMonstre->GetX() == x && m_pMonstre->GetY() == y)
					{
						cout << "?";
						continue;
					}

					else if (x == 9 && y == 9 || x == 49 && y == 9 || x == 29 && y == 9 || x == 9 && y == 19 || x == 49 && y == 19 || x == 29 && y == 19 || x == 19 && y == 4 || x == 39 && y == 4 || x == 19 && y == 14 || x == 39 && y == 14 || x == 19 && y == 24 || x == 39 && y == 24)
						cout << " ";
					else if (x == 8 && y == 9 || x == 10 && y == 9 || x == 28 && y == 9 || x == 30 && y == 9 || x == 48 && y == 9 || x == 50 && y == 9 || x == 8 && y == 19 || x == 10 && y == 19 || x == 28 && y == 19 || x == 30 && y == 19 || x == 48 && y == 19 || x == 50 && y == 19)
						cout << "|";
					else if (x == 19 && y == 3 || x == 19 && y == 5 || x == 39 && y == 3 || x == 39 && y == 5 || x == 19 && y == 13 || x == 19 && y == 15 || x == 39 && y == 13 || x == 39 && y == 15 || x == 19 && y == 23 || x == 19 && y == 25 || x == 39 && y == 23 || x == 39 && y == 25)
						cout << "-";
					else if (y == 0 || y == 9 || y == 19 || y == 29 || y == 39)
						cout << "-";
					else if (x == 0 || x == 19 || x == 39 || x == 59)
						cout << "|";
					else
					{
						cout << " ";
					}
				}
				cout << "\n";
			}
		}
		if (v == 2)
		{
			m_pPlayer->AddX(-20);
			system("cls");
			if (m_pPlayer->GetX() <= 0)
			{
				m_pPlayer->AddX(20);
			}

			for (int y = 0; y < 30; y++) {

				for (int x = 0; x < 60; x++) {

					if (m_pPlayer->GetX() == x && m_pPlayer->GetY() == y)
					{
						cout << "X";
						continue;
					}
					else if (m_pMonstre->GetX() == x && m_pMonstre->GetY() == y)
					{
						cout << "?";
						continue;
					}

					else if (x == 9 && y == 9 || x == 49 && y == 9 || x == 29 && y == 9 || x == 9 && y == 19 || x == 49 && y == 19 || x == 29 && y == 19 || x == 19 && y == 4 || x == 39 && y == 4 || x == 19 && y == 14 || x == 39 && y == 14 || x == 19 && y == 24 || x == 39 && y == 24)
						cout << " ";
					else if (x == 8 && y == 9 || x == 10 && y == 9 || x == 28 && y == 9 || x == 30 && y == 9 || x == 48 && y == 9 || x == 50 && y == 9 || x == 8 && y == 19 || x == 10 && y == 19 || x == 28 && y == 19 || x == 30 && y == 19 || x == 48 && y == 19 || x == 50 && y == 19)
						cout << "|";
					else if (x == 19 && y == 3 || x == 19 && y == 5 || x == 39 && y == 3 || x == 39 && y == 5 || x == 19 && y == 13 || x == 19 && y == 15 || x == 39 && y == 13 || x == 39 && y == 15 || x == 19 && y == 23 || x == 19 && y == 25 || x == 39 && y == 23 || x == 39 && y == 25)
						cout << "-";
					else if (y == 0 || y == 9 || y == 19 || y == 29 || y == 39)
						cout << "-";
					else if (x == 0 || x == 19 || x == 39 || x == 59)
						cout << "|";
					else
					{
						cout << " ";
					}
				}
				cout << "\n";
			}
		}
		if (v == 3)
		{
			m_pPlayer->AddX(20);
			system("cls");
			if (m_pPlayer->GetX() >= 59)
			{
				m_pPlayer->AddX(-20);
			}

			for (int y = 0; y < 30; y++) {

				for (int x = 0; x < 60; x++) {

					if (m_pPlayer->GetX() == x && m_pPlayer->GetY() == y)
					{
						cout << "X";
						continue;
					}
					else if (m_pMonstre->GetX() == x && m_pMonstre->GetY() == y)
					{
						cout << "?";
						continue;
					}

					else if (x == 9 && y == 9 || x == 49 && y == 9 || x == 29 && y == 9 || x == 9 && y == 19 || x == 49 && y == 19 || x == 29 && y == 19 || x == 19 && y == 4 || x == 39 && y == 4 || x == 19 && y == 14 || x == 39 && y == 14 || x == 19 && y == 24 || x == 39 && y == 24)
						cout << " ";
					else if (x == 8 && y == 9 || x == 10 && y == 9 || x == 28 && y == 9 || x == 30 && y == 9 || x == 48 && y == 9 || x == 50 && y == 9 || x == 8 && y == 19 || x == 10 && y == 19 || x == 28 && y == 19 || x == 30 && y == 19 || x == 48 && y == 19 || x == 50 && y == 19)
						cout << "|";
					else if (x == 19 && y == 3 || x == 19 && y == 5 || x == 39 && y == 3 || x == 39 && y == 5 || x == 19 && y == 13 || x == 19 && y == 15 || x == 39 && y == 13 || x == 39 && y == 15 || x == 19 && y == 23 || x == 19 && y == 25 || x == 39 && y == 23 || x == 39 && y == 25)
						cout << "-";
					else if (y == 0 || y == 9 || y == 19 || y == 29 || y == 39)
						cout << "-";
					else if (x == 0 || x == 19 || x == 39 || x == 59)
						cout << "|";
					else
					{
						cout << " ";
					}
				}
				cout << "\n";
			}
		}
		if (v == 4)
		{
			m_pPlayer->AddY(10);
			system("cls");
			if (m_pPlayer->GetY() >= 30)
			{
				m_pPlayer->AddY(-10);
			}

			for (int y = 0; y < 30; y++) {

				for (int x = 0; x < 60; x++) {

					if (m_pPlayer->GetX() == x && m_pPlayer->GetY() == y)
					{
						cout << "X";
						continue;
					}
					else if (m_pMonstre->GetX() == x && m_pMonstre->GetY() == y)
					{
						cout << "?";
						continue;
					}
					else if (x == 9 && y == 9 || x == 49 && y == 9 || x == 29 && y == 9 || x == 9 && y == 19 || x == 49 && y == 19 || x == 29 && y == 19 || x == 19 && y == 4 || x == 39 && y == 4 || x == 19 && y == 14 || x == 39 && y == 14 || x == 19 && y == 24 || x == 39 && y == 24)
						cout << " ";
					else if (x == 8 && y == 9 || x == 10 && y == 9 || x == 28 && y == 9 || x == 30 && y == 9 || x == 48 && y == 9 || x == 50 && y == 9 || x == 8 && y == 19 || x == 10 && y == 19 || x == 28 && y == 19 || x == 30 && y == 19 || x == 48 && y == 19 || x == 50 && y == 19)
						cout << "|";
					else if (x == 19 && y == 3 || x == 19 && y == 5 || x == 39 && y == 3 || x == 39 && y == 5 || x == 19 && y == 13 || x == 19 && y == 15 || x == 39 && y == 13 || x == 39 && y == 15 || x == 19 && y == 23 || x == 19 && y == 25 || x == 39 && y == 23 || x == 39 && y == 25)
						cout << "-";
					else if (y == 0 || y == 9 || y == 19 || y == 29 || y == 39)
						cout << "-";
					else if (x == 0 || x == 19 || x == 39 || x == 59)
						cout << "|";
					else
					{
						cout << " ";
					}
				}
				cout << "\n";
			}
		}
		if (v == 0)
		{
			running = false;
		}
	}
	system("pause>nul");
}

int Room::GetCell(int x, int y) {
	return (0);
}

void Room::createMonster()
{
    if (m_monstre)
        return;

    m_monstre = new Monstre(0, 0);

    m_monstre->m_name = monstreGame()->newMonstre();
    m_monstre->m_pv = 5 + rand()%5;
    m_monstre->m_atk = 1 + rand()%5;  
}

void Room::createSword()
{
    if (m_sword)
        return;

    m_sword = new Arme;

    m_sword->m_name = GetGame()->GetNextName();
    m_sword->m_attack = 2 + rand() % 5;
}

void Room::createArmor()
{
    if (m_armor)
        return;
    m_armor = new Armor;

    m_armor->m_name = "Armure";
    m_armor->m_defense = 1 + rand() %3;
}