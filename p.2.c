#include<stdio.h>
int add(int x,int y)
{
    if(x==0)
        return y;
    else if(y==0)
        return x;
    else
        return add(x,y);
}
int main()
{
    int a,b,sum;
    printf("add two numbers using recursion:\n");
    printf("enter first number:\n");
    scanf("%d",&a);
    printf("enter second number:\n");
    scanf("%d",&b);
    sum=add(a,b);
    printf("sum of two number is:%d",sum);
    return 0;
}
