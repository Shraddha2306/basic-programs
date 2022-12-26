#include<stdio.h>
int main()
{
    int n,i,num[100];
    printf("how many number you want:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter no:\n");
        scanf("%d",&num[i]);
    }
    for(int j=0;j<n;j++)
    printf("numbers are:%d\n",num[j]);

    return 0;
}
