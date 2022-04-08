#include<stdio.h>
void main()
{
    int i=0,ft,temp,fst;
    int n,c,lt,sum;
    printf("Enter any no:");
    scanf("%d",&n);//145 ----.541
    c=n;
    while(n>=1)
    {//
        ft=n%10;
        fst=ft;
 printf("%d",ft);
        if(i!=1 && i!=i-1)
        {
        sum=fst;

        }

        sum=ft;
        n=n/10;
        i++;
    }



    printf("\nFirst digit : %d\n",ft);  //1
    printf("Last digit : %d\n",c%10); //5
    lt=c%10; //5
    temp=ft;  //1
    ft=lt; //5
    lt=temp;//1
     printf("First digit : %d\n",ft);  //1
    printf("Last digit : %d\n",lt); //5
     printf(" sum digit : %d\n",sum);
    //n=145
    //n/10=14%10=4




    }

