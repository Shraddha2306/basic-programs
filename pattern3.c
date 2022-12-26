#include<stdio.h>
int main()
{
    int n,i,j;
    n=5;
    for(i=0;i<n;i++)
    {
        for(j=1;j<n-i+1;j++)
        {
            printf("* ");
        }
        printf("\n");
    }

}
