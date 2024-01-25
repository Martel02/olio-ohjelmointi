#include "chef.h"

Chef::Chef(string x)
{
    name = x;
    cout <<name<<" konstruktori"<<endl;
}

Chef::~Chef()
{
    cout<<name<<" destrukstori"<<endl;
}

void Chef::makeSalad()
{
    cout <<name<<" makes salad"<<endl;
}

void Chef::makeSoup()
{
    cout <<name<<" makes soup"<<endl;
}
