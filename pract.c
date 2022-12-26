#include<stdio.h>
void swapping(unsigned int x,unsigned int j,unsigned int k)
    {
        unsigned int temp;
        printf("swap bits: INPUT x: 0x%X, j=%d, k=%d\n");
        temp=((x>>(j-1))&0x1)^((x>>(k-1))&0x1);
        x=x^(temp<<(j-1));
        x=x^(temp<<(k-1));
        printf("swap bits: output=0x%x \n",x);
    }
int main()
{
    int x,j,k;

    printf("Enter a number: ");
    scanf("%d", &x);

    printf("Enter the first bit position: ");
    scanf("%d", &j);

    printf("Enter the second bit position: ");
    scanf("%d", &k);

    swapping(x,j,k);
    return 0;
}
