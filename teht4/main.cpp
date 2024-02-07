#include <iostream>
#include "kerrostalo.h"

using namespace std;

int main()
{
    double hinta = 1;

    //teht 1
//    Asunto myAsunto;
//    myAsunto.maarita(2,100);
//    myAsunto.laskeKulutus(hinta);

    //teht 2
//    Katutaso myKatutaso;
//    myKatutaso.maaritaAsunnot();
//    myKatutaso.Kerros::maaritaAsunnot();
//    double kulutus = myKatutaso.Kerros::laskeKulutus(hinta) + myKatutaso.laskeKulutus(hinta);
//    cout<<"Katutason ja perityn kerroksen kulutus, kun hinta = "<<hinta<<" on "<<kulutus<<endl;

    //teht 3
    Kerrostalo myKerrostalo;
    cout<<"Kerrostalon kulutus, kun hinta = "<<hinta<<" on "<<myKerrostalo.laskeKulutus(hinta)<<endl;

    return 0;
}
