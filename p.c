#include<stdio.h>
int add(int m, int n){
    if(n == 0)
        return m;
    else if(m == 0)
        return n;
    return add(m,n);

}
int main()
{
    int a, b, sum;
    printf("C Program to add two number using recursion \n");
    printf("Enter the first number:\n");
    scanf("%d", &a);
    printf("Enter the second number:\n");
    scanf("%d", &b);
    sum = add(a, b);
    printf("Sum of two numbers is: %d\n", sum);
    return 0;
}
