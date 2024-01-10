#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
void game(int);

int main()
{
    int range = 0;
    cout << "Anna suurin luku mista arvata" << endl;
    cin >> range;

    game(range);
    return 0;
}

void game(int maxnum) {
    srand(time(NULL));
    int arvaus = 0;
    int rng = rand() % maxnum;
    int arvauksia = 0;

    cout << "Arvaa luku 0-"<<maxnum<< endl;

    while(arvaus != rng) {
        cin >> arvaus;
        if(arvaus < rng) {
            cout << "luku on suurempi" <<endl;
            arvauksia++;
        }
        else if(arvaus > rng) {
            cout << "luku on pienempi" <<endl;
            arvauksia++;
        }
        else if(arvaus == rng) {
            arvauksia++;
            cout << "oikea arvaus" <<endl;
            cout << "sinulla meni "<<arvauksia<< " arvausta" <<endl;
        }
    }
}

