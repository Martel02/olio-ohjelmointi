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

double Asunto::laskeKulutus(double hinta)
{
    double AsuntoKulutus = asukasMaara * neliot * hinta;
    //teht 1
    //cout<<"Asunnon kulutus, kun hinta = "<<hinta<<" on "<<AsuntoKulutus<<endl;

    return AsuntoKulutus;
}
