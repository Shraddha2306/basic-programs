//program to sort an array
//program 2

#include<stdio.h>
void main()
{
    int num[20];
    int i,j,a,n;
    printf("enter number of elements:");
    scanf("%d",&n);
    printf("enter the elements:");
    for(i=0;i<n;++i)
        scanf("%d",&num[i]);
    for(i=0;i<n;++i){
        for(j=i+1;j<n;++j)
    {
        if(num[i]>num[j]){
            a=num[i];
            num[i]=num[j];
            num[j]=a;
        }
    }
}
printf("sort an array is:\n");
for(i=0;i<n;++i){
    printf("%d\n",num[i]);
}
}
