#include "katutaso.h"

Katutaso::Katutaso()
{
    cout<<"Katutaso luotu"<<endl;
    as1 = new Asunto;
    as2 = new Asunto;
}

void Katutaso::maaritaAsunnot()
{
    cout<<"Maaritetaan 2 kpl katutason asuntoja"<<endl;
    as1->maarita(2,100);
    as2->maarita(2,100);
}

double Katutaso::laskeKulutus(double hinta)
{
    double KatutasoKulutus = as1->laskeKulutus(hinta) + as2->laskeKulutus(hinta);

    return KatutasoKulutus;
}

Katutaso::~Katutaso()
{
    delete as1;
    delete as2;
    as1 = nullptr;
    as2 = nullptr;
    cout<<"Katutaso tuhottu"<<endl;
}
