//count the digit of your given no.
#include<stdio.h>
void main()
{
    int n,i=0;
    printf("Enter any no:");
    scanf("%d",&n);
    while(n>=1)
    {
        n=n/10;
        i++;
    }
    printf("Totle digit of given no.:%d\n",i);
}
