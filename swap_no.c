#include<stdio.h>
int main()
{
    int a,b;
    a=10,b=6;
    printf("before swapping the value of a=%d and b=%d:\n",a,b);
  //  a=a^b;
  //  b=a^b;
   // a=a^b;

   // a=a*b/(b=a);

   /* a=a+b;
    b=a-b;
    a=a-b;*/

    a=a*b;
    b=a/b;
    a=a/b;
    printf("after swapping the values are a=%d and b=%d\n",a,b);

}
