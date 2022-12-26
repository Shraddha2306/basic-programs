//usiong pointers in c
#include<stdio.h>
int main()
{
    int a,*p;

    a=10;
    p=&a;

    printf("the value of a is:%d\n",a);

    printf("the value of p is:%d\n",p);

    printf("the value of *p is:%d\n",*p);

    return 0;

}
