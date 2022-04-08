#include<stdio.h>

int main()
{
int n,i=0;
printf("Enter value of digit");
scanf("%d",&n);
while(n>=i)   //30>=0   ,3>=1  ,0>=2
{
n=n/10;       //3=30/10 (i=1,n=3) ,0=3/10(n=0, i=2)
i=i+1;
}
printf("Total number of Digit is %d",i);


return 0;
}




