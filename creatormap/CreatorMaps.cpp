#include "CreatorMaps.hpp"
#include <iostream>
#include <string>

CreatorMaps::CreatorMaps()
{

}

CreatorMaps::CreatorMaps(int x,int y)
{
    this->create(x,y);
}

void CreatorMaps::create(int x, int y)
{
    this->tab = new int * [x];
    x--;
    for(int i=0; i<=x; i++)
    {
        this->tab[i] = new int [y];
    }
    y--;
    this->Y = y;
    this->X = x;
    this->reset();
}

void CreatorMaps::show()
{
    for(int i=0; i<=X;i++)
    {
        for(int j=0; j<=Y;j++)
        {
            std::cout << this->tab[j][i];
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}
void CreatorMaps::reset()
{
    for(int i=0; i<=X;i++)
    {
        for(int j=0; j<=Y;j++)
        {
           this->tab[i][j] = 0;
        }
    }
}
