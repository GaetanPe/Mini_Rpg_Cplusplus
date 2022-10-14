#include "Framework.h"

void Room::printGrid() {

    for (int y = 0; y < 10; y++) {

        for (int x = 0; x < 10; x++) {

            if ( y==0 || y==9 )
                cout << "-";
            else if ( x==0 || x==9 )
                cout << "|";
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }
}