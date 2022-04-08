#include<stdio.h>

int main()
{
int n;
int i=0;
int sum=0;
printf("Enter the value of n\n");
 scanf("%d",&n);

while(i<=n)//  0<=  5 , 2<=5
 {

sum=sum+i;   //0      ,0+2=2
i=i+2;       //0+2=2  ,2+2=4
 }
 printf("%d",sum);






return 0;
}
