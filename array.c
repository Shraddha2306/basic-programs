#include<stdio.h>
int main()
{
    int array[5],i,sum=0;
    printf("enter elements:\n");
    for( i=0;i<5;i++)
    scanf(" %d",&array[i]);
    printf("array:\n");
    for( i=0;i<5;i++)
    {

        printf("%d",array[i]);
        printf("\n");
    }
    for( i=0;i<5;i++)
    {

        sum=sum+array[i];
    }

    printf("sum:%d\n",sum);
    return 0;
}

