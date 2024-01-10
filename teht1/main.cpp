#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(NULL));
    int arvaus = 0;
    int rng = rand() % 20;

    cout << "Arvaa luku 1-20" << endl;

    while(arvaus != rng) {
        cin >> arvaus;
        if(arvaus < rng) {
            cout << "luku on suurempi" <<endl;
        }
        else if(arvaus > rng) {
            cout << "luku on pienempi" <<endl;
        }
        else if(arvaus == rng) {
            cout << "oikea arvaus" <<endl;
        }
    }
    //void arvauspeli();
    return 0;
}
/*
void arvauspeli() {
    int arvaus = 0;
    int rng = rand() % 20;

    cout << "Arvaa luku 1-20" << endl;
    cin >> arvaus;

    if(arvaus < rng) {
        cout << "luku on suurempi" <<endl;
    }
    else if(arvaus > rng) {
        cout << "luku on pienempi" <<endl;
    }
    else if(arvaus == rng) {
        cout << "oikea arvaus" <<endl;
    }
}
*/
