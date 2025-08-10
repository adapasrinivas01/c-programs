#include <stdio.h>

int main() {
	 
	 int n;
	 scanf("%d",&n);
	 for(int i=0;i<n;i++)
	 {
	     int a,b,c,sum=0;
	     scanf("%d %d %d",&a,&b,&c);
	     for(int j=1;j<=a;j++)
	     {
	         if(j%2==0)
	         sum+=b;
	         else
	         sum+=c;
	     }
	     printf("%d\n",sum);
	 }
}

