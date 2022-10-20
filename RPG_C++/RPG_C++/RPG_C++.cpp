#include "Framework.h"

extern game* g_pGame;
int main()
{
	ShowWindow(GetConsoleWindow(), SW_SHOWMAXIMIZED);
	Player player;
	string name = player.AskName();
	system("cls");
	/*game nb;
	int msg = nb.Salle(); */
	Room* room = new Room;
	room->printGrid();
	
	system("pause>nul");
	game nb;
	nb.moove();
	system("cls");
	return 0;
	srand((int)time(NULL));

	game game;
	g_pGame = &game;

	GetGame()->initArmor();
	GetGame()->newArmor();


	

}
