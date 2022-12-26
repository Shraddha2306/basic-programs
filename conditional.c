/*
#include<stdio.h>
 int main()
 {
     int a=20,b=30;
     if(a==b)
     {
         printf("number is equal");
     }
     else
     {
         printf("number is not equal");
     }
     return 0;
 }
//find greater  between two variables
#include<stdio.h>
 int main()
 {
     int a=200,b=30;
     if(a>b)
     {
         printf("a is greater");
     }
     else if
     {
         printf("b is greater");
     }
     else
     {
         printf("both are equal");
     }
     return 0;
 }
//greatest value using logical
#include<stdio.h>
int main()
{
    int a,b,c;
    a=10;
    b=50;
    c=30;
    if(a>b && a>c)
    {
        printf("a is greater!");
    }
    else if(b>c && b>a)
    {
        printf("b is greater!");
    }
    else
    {
        printf("c is greater!");
    }
return 0;
}

//largest number using tarnary operator
#include<stdio.h>
int main()
{
    int a,b,c,max;
    a=10;
    b=90;
    c=30;
    max = (a > b) ? (a > c ? a : c) : (b > c ? b : c);
    printf("%d",max);
    return 0;
}
//check leap year
#include<stdio.h>
int main()
{
    int year;
    printf("enter year:\n");
    scanf("%d",&year);
    if(year%400==0)
    {
        printf("leap year");
    }
    else if(year%100==0)
    {
        printf("not a leap year");
    }
    else if(year%4==0)
    {
        printf("leap year");
    }
    else
    {
        printf("not a leap year");
    }
return 0;
}
//even or odd
#include<stdio.h>
int main()
{
    int num;
    printf("enter a number:\n");
    scanf("%d",&num);

    if(num%2==0)
    {
        printf("number is even!");
    }
    else
    {
        printf("number is odd!");
    }
    return 0;
}
//even or odd using ternary operator
#include<stdio.h>
int main()
{
    int num;
    printf("enter a number:\n");
    scanf("%d",&num);
    (num%2==0)? printf("number is even!"):printf("number is odd!");
    return 0;
}

//number is positive ,negative or zero
#include<stdio.h>
int main()
{
    int number;
    printf("enter a number:\n");
    scanf("%d",&number);
    (number==0)? printf("zero"): (number>0)?printf("positive"):printf("negative");
    return 0;
}

#include<stdio.h>
int main()
{
    int number;
    printf("enter a number:\n");
    scanf("%d",&number);
    if(number>0)
    {
        printf("positive");
    }
    if(number<0)
    {
        printf("negative");
    }
    if(number==0)
    {
        printf("zero");
    }
    return 0;
}

//check large number  or equal
#include<stdio.h>
int main()
{
   int a,num=4657;
   printf("enter a number:\n");
   scanf("%d",&a);
   if(a>num)
   {
       printf("number is greater than %d",num);
   }
   else if(a==num)
   {
       printf("number is equal!");
   }
   else
   {
       printf("number is smaller");
   }
    return 0;
}

//calculator using switch case
#include<stdio.h>
int main()
{
    char operator;
    float num1,num2,result;
    printf("Enter firrst number, operaor ,second number[ENTER]:\n");
    scanf("%f%c%f", &num1,&operator,&num2);

    switch(operator)
    {
        case '+':
        {
            result=(num1+num2);
            printf("addition is :%.2f ",result);
            break;
        }
        case '-':
        {
            result=(num1-num2);
            printf("subtraction is:%.2f ",result);
            break;
        }
        case '*':
        {
            result=(num1*num2);
            printf("multiplication is:%.2f ",result);
            break;
        }
        case '/':
        {
            result=(num1/num2);
            printf("devision is:%.2f ",result);
            break;
        }
        default:
            printf("invalid operator\n please enter a valid operator");
            return 0;
    }
}
*/
