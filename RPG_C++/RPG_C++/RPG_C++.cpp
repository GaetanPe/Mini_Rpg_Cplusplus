#include "Framework.h"

extern game* g_pGame;
extern game* g_monstreGame;

int main()
{
	ShowWindow(GetConsoleWindow(), SW_SHOWMAXIMIZED);
	hero player;
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
	GetGame()->InitApp();
	GetGame()->Init();

	g_monstreGame = &game;
	monstreGame()->tabMonstre();
	monstreGame()->initMonstre();


}
