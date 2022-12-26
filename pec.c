#include <stdio.h>
int main ()
{
   int var,*ip;
   ip = &var;
   printf("the value is:\n");
   scanf("%d",&var);
   printf("Address of var variable: %x\n", &var  );
   printf("Address stored in ip variable: %x\n", ip );
   printf("Value of *ip variable: %d\n", *ip );
   return 0;
}
