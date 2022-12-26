#include<stdio.h>
int main()
{
    int n,i,j;
    n=5;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j<i)
                printf(" ");
            else
                printf(" *");
        }
        printf("\n");
    }
}
