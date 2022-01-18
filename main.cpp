#include <iostream>
#include "Runda.hpp"
#include "Pacman.hpp"
#include <conio.h>

using namespace std;


int main()
{
    Runda plansza;
    int m;

    while(1)
    {
    m=getch();
    plansza.oneMove(m);
    system("cls");
    plansza.drawBoard();
    }
    return 0;
}
