#include<stdio.h>
int main()
{
    int a=10,*p;
    p=&a;
    printf("the value is:%d\n",*p);
    printf("the value is:%d\n",p);
    printf("the value is:%d\n",&a);
}
