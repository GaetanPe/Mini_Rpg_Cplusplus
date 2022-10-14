#include "Framework.h"

int game::Salle() {
	int nombreSalle = 0;
	int vitesseAtq = 0;
	int vitesseMAtq = 0;
	int restart = 1;
	srand(time(NULL));

	nombreSalle = 0;
	hero* m_pHero = new hero();
	Monstre* m_pMonstre = new Monstre();
	if (nombreSalle == 0)
	{	
		if (m_pMonstre->getM_Pv() == 0)
		{
			cout << "Le monstre a déjà était battu\n";
			cout << "Veuillez choisir une direction";
		}
		cout << "Il y'a un " << m_pMonstre->getM_Name() << " la\n";
		cout << "Voulez vous combattre contre le monstre ? y or n \n";

		char response = 0;
		cin >> response;

		switch (response)
		{
		case 'y':
		case 'Y':
			cout << "Let's go fight\n";
			system("pause>nul");
		
			while(m_pMonstre->getM_Pv() != 0 && m_pHero->get_Pv() != 0)
			{
				vitesseAtq =  rand() %2;
				if (vitesseAtq == 0)
				{
					m_pMonstre->Hurt(m_pHero->get_Atk());
					cout << "Vous lui infligez " << m_pHero->get_Atk() <<" degats. \n";
					cout << "Il reste " << m_pMonstre->getM_Pv() << " PV a " << m_pMonstre->getM_Name() << "\n";
					if (m_pMonstre->getM_Pv() == 0)
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

				vitesseMAtq = rand() % 3;
				if (vitesseMAtq == 0)
				{
					m_pHero->Hurt(m_pMonstre->getM_Atk());
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
