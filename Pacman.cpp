#include "Pacman.hpp"
#include <iostream>

using namespace std;

Pacman::Pacman()
{
    pozX = 5;
    pozY = 5;
    ptk = 0;


}

void Pacman::move(int m)
{
    switch(m)
    {
        case 119:
            (--pozX);
            if(pozX == 0)
            {
                pozX = 10;
            }
            break;
        case 115:
            (++pozX);
            if(pozX == 11)
            {
                pozX = 1;
            }
            break;
        case 97:
            (--pozY);
            if(pozY == 0)
            {
                pozY = 10;
            }
            break;
        case 100:
            (++pozY);
            if(pozY == 11)
            {
                pozY = 1;
            }
            break;
        default:
            break;

    }


}

int Pacman::getPozX()
{
    return pozX;
}
int Pacman::getPozY()
{
    return pozY;
}
