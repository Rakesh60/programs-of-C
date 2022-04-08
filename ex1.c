#include<stdio.h>
 int main ()
 {
 int n,a,i=1;
 printf("Enter a number\n");
 scanf("%d",&n);
   //332/10=2
 while(n>=i)
{
a=n%10;
n=n/10;
i=i+1;
}
printf("First digit is %d",n);

printf(" Last digit is %d",a);

 return 0;
 }
