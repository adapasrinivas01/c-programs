#include<stdio.h>
#include<math.h>
int main() 
{
int a,b;
scanf("%d %d", &a, &b);
int hcf=0;
int min=(a<b)?a:b;
for(int i=1;i<=min;i++) 
{
    if(a%i==0 && b%i==0)
       hcf =i;
 }
 printf("%d", hcf);
 }
       
