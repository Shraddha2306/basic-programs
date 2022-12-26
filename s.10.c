//program no 10
//find LCM using while and if control statements


#include <stdio.h>
int main()
{
    int p, q, x;
    printf("Enter the two positive integer no\n");
    scanf("%d %d", &p, &q);
    x = p > q ? p : q;
    while (1)
        {
        if (x % p == 0 && x % q == 0) {
            printf("\nThe LCM of the %d and %d numbers is %d.\n",p,q,x);
            break;
        }
        ++x;
    }
    return 0;
}
