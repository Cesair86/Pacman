#ifndef PACMAN_HPP_INCLUDED
#define PACMAN_HPP_INCLUDED

using namespace std;

class Pacman
{
    int pozX;
    int pozY;
    int ptk;


    public:
    Pacman();
    int getPozX();
    int getPozY();
    void move(int m);

};


#endif // PACMAN_HPP_INCLUDED
