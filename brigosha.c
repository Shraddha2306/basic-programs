#include<stdio.h>
int main()
{
    fun();
}
int fun()
{
    static int cnt=0;
    if(cnt<50)
    {
        printf("%d brigosha\n",cnt+1);
        cnt++;
        fun();
    }
}
