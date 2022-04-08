#include<stdio.h>
 int main()
 {
 int i=1;
 int n;
 int sum=0;
 printf("Enter the value of n");
 scanf("%d",&n);
 while(i<=n)
 {
 sum=sum+i;

 i++;

 }
 printf("\n%d",sum);


 return 0;
 }

