#include "Framework.h"

extern game* g_pGame;

int main()
{
	Room* room = new Room;
	room->printGrid();
	/*
	hero player;
	string name = player.AskName();
	system("pause>nul");
	game nb;
	int msg = nb.Salle();

	system("pause>nul");
	system("cls");
	return 0;
	*/
	srand((int)time(NULL));

	game game;
	g_pGame = &game;
	GetGame()->InitApp();
	GetGame()->Init();

	//while (true)
	//{
	//	cout << game.GetNextName() << endl;
	//	Sleep(1000);
	//}
}
