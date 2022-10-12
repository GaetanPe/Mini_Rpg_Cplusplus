#include"Clear.h"


void Clear::clearConsole()
{
        int flag;

        flag = cin.get();

        this_thread::sleep_for(1000ms);

        system("cls");
}
