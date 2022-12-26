#include<stdio.h>
int main()
{
    int n,i,m;
    printf("enter number:\n");
    scanf("%d",&n);
    m=n/2;
    for(i=2;i<m;i++)
    {
        if(n%i==0)
            printf("not prime!");
        else
            printf("prime!");
    }
return 0;
}
