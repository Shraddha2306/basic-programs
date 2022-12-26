#include <stdio.h>
int main()
{
    unsigned char data = 0xA; // Assiging hexadecimal value
    unsigned char bit_1 = (data >> 0) & 1;
    unsigned char bit_2 = (data >> 1) & 1;
    unsigned char xor_of_bit = bit_1 ^ bit_2;
    printf("After swapping the bits,data value is:%2X", data ^ (xor_of_bit << 1 | xor_of_bit << 2));
    return 0;
}
