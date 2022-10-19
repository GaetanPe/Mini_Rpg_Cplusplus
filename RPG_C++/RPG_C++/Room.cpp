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

    for (int y = 0; y < 10; y++) {

        for (int x = 0; x < 20; x++) {

            if (y == 0 || y == 9)
                cout << "-";
            else if (x == 0 || x == 19)
                cout << "|";
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }
}


void Room::createMonster()
{
    if (m_monstre)
        return;

    m_monstre = new Monstre;

    m_monstre->m_name = GetGame()->newMonstre();
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

    m_armor->m_name = GetGame()->newArmor();
    m_armor->m_Type = " ";
    m_armor->m_defense = 1 + rand() %3;

}