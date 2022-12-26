//fibonacci sequence using static
#include<stdio.h>
void fibonacci(int n)
{
    static int n1,n2,n3;
    n1=0;
    n2=1;
    printf("the sequence:\n%d\n%d\n",n1,n2);
    for(int i=2;i<n;i++)
    {
        n3=n1+n2;
        printf("%d\n",n3);
        n1=n2;
        n2=n3;
    }
}
int main()
{
    int n;
    printf("how many element you want:\n");
    scanf("%d",&n);
    printf("the sequence:\n%d\n%d\n",0,1);
    return 0;
}
