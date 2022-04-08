#include<stdio.h>
void main()
{
    int i=0,n,ft,lt;
    printf("Enter any no:");
    scanf("%d",&n);
    lt=n%10;
    while(n>=1)
    {
        ft=n%10; //325/10=5   ,32/10=2
        n=n/10;  //325/10=32  ,32/10=3
        i++;
    }

    printf("First digit : %d\n",ft);
    printf("Last digit : %d\n",lt);
    printf("Totle digit of your given no. : %d\n",i);
}
