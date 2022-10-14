#include "Framework.h"

int main()
{
	Room* room = new Room;
	room->printGrid();
	hero player;
	string name = player.AskName();
	system("pause>nul");
	game nb;
	int msg = nb.Salle();

	system("pause>nul");
	system("cls");
	return 0;
}
