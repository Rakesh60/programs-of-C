#include<stdio.h>

int main()
{
int n;
int i=1;
printf("Enter the velue of n");
scanf("%d",&n);

while(i<=10)
{
printf("%d * %d = %d\n",n,i,n*i);
//printf("%d",n);
//printf("* %d",i);
//printf("= %d\n",n*i);
i++;
}






return 0;
}
