#include <iostream>
using namespace std;
int main()
{
    string name;
    cout<<"may i know your name?\n";
    //cin>>name;
    getline(cin,name);
    cout<<"hello mr/ms"<<name;
    return 0;
}
