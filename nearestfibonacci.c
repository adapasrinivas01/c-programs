#include<stdio.h>
#include<stdlib.h>
int main() 
{
int n;
scanf("%d",&n);
int fib1=0,fib2=1;
while(fib2<n)
{
  int temp=fib2;
  fib2=fib1+fib2;
  fib1=temp;
}
int d1=abs(n-fib1);
int d2=abs(n-fib2);
if(d1<d2)
printf("%d",fib1);
else if(d1>d2)
printf("%d",fib2);
else
printf("%d %d",fib1,fib2);
return 0;
}
  
