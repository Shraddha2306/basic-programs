//prime number
#include<stdio.h>
int main()
{
    int m,n,count=0;
    printf("enter number which u want to know ,prime or not?\n");
    scanf("%d",&n);

    m=n/2;
    for(int i=1;i<=m;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }

if(count==1)
{
    printf("prime number!");
}
else{
    printf("not prime!");}
}
