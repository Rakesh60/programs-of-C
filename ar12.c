#include<stdio.h>
void main()
{
    int n,i=0,ft,c,lt,temp,sum,ftt;
    printf("Enter any no:");
    scanf("%d",&n);
    c=n;
   // printf("\nreverse:%d",sum);
    while(n>=1)
    {
        ftt=n%10;
        n=n/10;
        while(n>=1)
        {
            ft=n%10;
            n=n/10;
            i++;
            //printf("%d",ft);
        }
    }
    //printf("\nreverse:%d",sum);
    printf("\nnumber:%d",c);
    printf("\nfirst digit:%d",ft);
    lt=c%10;
    printf("\nLast digit:%d",lt);
}
