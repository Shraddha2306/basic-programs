//print 1-10
/*
#include<stdio.h>
int main()
{
    int num=10,i;
    printf("numbers are:\n");
    for(i=1;i<=num;i++)
    {
        printf("%d\n",i);
    }
    return 0;
}

//factorial
#include<stdio.h>
int main()
{
    int fact=1,i,n;
    printf("enter a number:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("factorial is:%d\n",fact);
    return 0;
}

//smallest number without using if statement
#include<stdio.h>
int main()
{
    int a,b,c,cnt=0;
    printf("enter numbers:\n");
    scanf("%d%d%d",&a,&b,&c);

    while(a&&b&&c)
    {
        a--;
        b--;
        c--;
        cnt++;
    }
    printf("smallest number is=%d",cnt);
}

//find digits in a number
#include<stdio.h>
int main()
{
   long long int numb,count=0,temp;
    printf("enter numb:\n");
    scanf("%d",&numb);

    while(numb!=0)
    {
        temp=numb%10;
        numb=numb/10;

        count++;
    }
    printf("total digits:%d\n",count);
    return 0;
}
*/
#include<stdio.h>
int main()
{
    int num,i;
    long int pow=1;

    printf("enter a number:\n");
    scanf("%d",&num);
    printf("enter the power of value:\n");
    scanf("%d",&pow);
    for(i=1;i<=pow;i++)
    {
        pow=pow*num;
    }
    printf("result is:%d\n",pow);
    return 0;
}
