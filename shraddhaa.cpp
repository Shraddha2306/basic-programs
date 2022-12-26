#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int X,Y,P,Q;
    int i,j;
    float res;
    cout<<"enter values of X:";
    cin>>X;
    cout<<"enter values of Y:";
    cin>>Y;
    cout<<"enter values of P:";
    cin>>P;
    cout<<"enter values of Q:";
    cin>>Q;
    cout<<"enter values of i:";
    cin>>i;
    cout<<"enter values of j:";
    cin>>j;

    res=(X+(i*Y))*2/(P+(j*Q))*2;
    cout<<"result:"<<res;
    return 0;
}
