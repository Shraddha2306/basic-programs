#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"enter the no of terms:";
    cin>>n;
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(i<=j)
                    cout<<"* ";
                else
                    cout<<"  ";
            }
            cout<<endl;
        }
    }
return 0;
}

