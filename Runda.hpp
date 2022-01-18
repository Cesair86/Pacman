#ifndef RUNDA_HPP_INCLUDED
#define RUNDA_HPP_INCLUDED
#include "Pacman.hpp"

using namespace std;

class Runda
{
    Pacman player;

    public:
    Runda();
    void drawBoard ();

    void oneMove(int k);


};


#endif // RUNDA_HPP_INCLUDED
