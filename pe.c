/*
#include <stdio.h>
//Macro to swap nibbles
//#define SWAP_NIBBLES(data) (100<<4 | 100)>>4)
int main()
{
    //unsigned char value = 100;
    //print after swapping
    char i=100,swap;
    swap=(i>>4)|(i<<4);

    printf("%d \n",swap);
    return 0;
}
*/
#include<stdio.h>
int main()
{
    char i=100,swap;
    swap=(i>>4)|(i<<4);
    printf("%c \n",swap);
    return 0;
}
