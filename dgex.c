#include<stdio.h>
void main()
{
    int i=0,n,ft;
    printf("Enter any no:");
    scanf("%d",&n);
    while(n>=1)
    {
        ft=n%10; //
        n=n/10;
        i++;
    }
    printf("First digit : %d\n",ft);
    printf("Last digit : %d\n",n%10);
    printf("Totle digit of your given no. : %d\n",i);
}
