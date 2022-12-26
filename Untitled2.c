#include<stdio.h>
int main()
{
    int n,i,j,array[100],small=array[0];
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
        if(small>array[i])
        {
            small=array[i];
        }
    }
    printf("the smallest value is:%d\n",small);
    return 0;
}
