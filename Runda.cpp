#include "Runda.hpp"
#include <iostream>

using namespace std;

Runda::Runda()
{
    player = Pacman();

    cout<<"+----------+"<<endl;

    for (int i = 0 ; i < 10 ; ++i)
    {
        if (i ==4)
        {
            cout<<"|    O     |"<<endl;
        }
        else
        {
        cout<<"|          |"<<endl;
        }
    }

    cout<<"+----------+"<<endl;

}

void Runda::drawBoard()
{
    for( int x = 0 ; x < 12 ; ++x)
    {
        for( int y = 0 ; y < 12 ; ++y)
        {

            if (x == player.getPozX() && y == player.getPozY())
            {
                cout<<"O";
            }
            else if(x == 0 || x == 11)
            {
                if (y == 0 || y == 11)
               {
                   cout<<"+";
               }
               else
               {
                   cout<<"-";
               }
            }
            else
            {
                if(y == 0|| y == 11)
                {
                    cout<<"|";
                }
                else
                {
                    cout<<" ";
                }
            }

            if(y==11)
            {

                cout<<"\n";
            }

        }
    }

}
 void Runda::oneMove (int k)
 {
     player.move(k);
 }
