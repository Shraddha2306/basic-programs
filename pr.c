#include<stdio.h>
int add();
int main()
{
//static int count=0;
add();
return 0;
}



int add()
{
 static int count=1;
int a=10,b=20,c;

if(count==1)
{

c=a+b;
printf("%d",c);
count++;
return add();
}
else{

    return 0;
}
//count++;
//printf("%d",c);

add();

}
