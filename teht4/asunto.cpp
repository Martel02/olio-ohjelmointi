#include "asunto.h"

Asunto::Asunto()
{
    cout<<"Asunto luotu"<<endl;
}

void Asunto::maarita(int x, int y)
{
    asukasMaara = x;
    neliot = y;
    cout<<"Asunto maaritetty asukkaita = "<<asukasMaara<<" nelioita = "<<neliot<<endl;
}

double Asunto::laskeKulutus(double x)
{
    int hinta = x;
    int kulutus = asukasMaara * neliot * hinta;
    cout<<"Asunnon kulutus, kun hinta = "<<hinta<<" on "<<kulutus<<endl;
    return 0;
}
