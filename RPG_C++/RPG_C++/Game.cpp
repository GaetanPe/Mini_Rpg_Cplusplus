#include "Framework.h"

int game::Salle() {
	int nombreSalle = 0;
	int vitesseAtq = 0;
	int vitesseMAtq = 0;

	srand(time(NULL));

	nombreSalle = 0;
	hero* m_pHero = new hero();
	Monstre* m_pMonstre = new Monstre();

	if (nombreSalle == 0) {
		cout << "Il y'a un " << m_pMonstre->getM_Name() << " la\n";
		cout << "Voulez vous vous battre contre le monstre ? \n";
		char response;
		cin >> response;

		switch (response) {
		case 'y':
		case 'Y':
			cout << "Let's go fight\n";
			system("pause>nul");
			
			while(m_pMonstre->getM_Pv() != 0 || m_pHero->get_Pv() != 0){
			vitesseAtq =  rand() %2;
			if (vitesseAtq == 0) {
				m_pMonstre->Hurt(m_pHero->get_Atk());
				cout << "Vous lui infligez des degats. \n";
				cout << "Il reste " << m_pMonstre->getM_Pv() << " PV a " << m_pMonstre->getM_Name() << "\n";
			}
			else {
				cout << "Vous avez louper votre attaque.\n";
			}
			system("pause>nul");

			vitesseMAtq = rand() % 3;
			if (vitesseMAtq == 0) {
				m_pHero->Hurt(m_pMonstre->getM_Atk());
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
