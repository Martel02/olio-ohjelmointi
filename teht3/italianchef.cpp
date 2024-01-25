#include "italianchef.h"

ItalianChef::ItalianChef(string x, int, int):Chef(x)
{
    cout <<getName()<<" konstruktori"<<endl;
}

string ItalianChef::getName()
{
    return name;
}

void ItalianChef::makePasta(int x, int y)
{
    jauhot = x;
    vesi = y;
    cout <<getName()<<" makes pasta with special recipe"<<endl;
    cout <<getName()<<" users jauhot = "<<x<<endl;
    cout <<getName()<<" users vesi = "<<y<<endl;

}
