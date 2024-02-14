#include "kerrostalo.h"

Kerrostalo::Kerrostalo()
{
    cout<<"Kerrostalo luotu"<<endl;

    eka = new Katutaso;
    toka = new Kerros;
    kolmas = new Kerros;
    eka->maaritaAsunnot();
    toka->maaritaAsunnot();
    kolmas->maaritaAsunnot();
}

double Kerrostalo::laskeKulutus(double hinta)
{
    double kulutus = eka->laskeKulutus(hinta) + toka->laskeKulutus(hinta) + kolmas->laskeKulutus(hinta);

    return kulutus;
}

Kerrostalo::~Kerrostalo()
{
    delete eka;
    delete toka;
    delete kolmas;
    eka = nullptr;
    toka = nullptr;
    kolmas = nullptr;
    cout<<"Kerrostalo tuhottu"<<endl;

}
