#include<stdio.h>
#include<stdlib.h>
int fibonacci(int n);

int main()
{
int n,c;
scanf("%d",&n);
printf("fibonacci series\n");
for(c=1;c<=n;c++)
{
printf("%d\n",fibonacci(c));
}
return 0;
}
int fibonacci(int n)
{
if(n==0)
return 0;
else if(n==1)
return 1;
else
return(fibonacci(n-1)+fibonacci(n-2));
}
