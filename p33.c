//print n number of elements and find the largest value in it
#include<stdio.h>
int main()
{
    int n,i,j,array[100],large=0;
    printf("enter how many numbers you want:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter num:\n");
        scanf("%d",&array[i]);
    }
    for(i=0;i<n;i++)
    printf("%d ",array[i]);

printf("\n");

    for(i=0;i<n;i++)
    {
        if(large<array[i])
        {
            large=array[i];
        }
    }
    printf("the largest value is:%d\n",large);
    return 0;
}

