#include <iostream>
#include "asunto.h"
#include "kerros.h"
#include "katutaso.h"

using namespace std;

int main()
{
    Asunto myAsunto;
    Katutaso myKatutaso;
    Kerros Kerros1;

    myAsunto.maarita(2,100);
    myAsunto.laskeKulutus(1);
    return 0;
}
