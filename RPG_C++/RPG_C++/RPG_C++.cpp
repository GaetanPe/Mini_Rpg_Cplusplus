#include "Framework.h"

int main()
{
	Room* room = new Room();
	//room->printGrid();
	hero player; 
	//string name = player.AskName();
	/*game nb;
	int msg = nb.Salle(); */
	game nb;
	nb.moove();
	system("cls");
	return 0;
}
