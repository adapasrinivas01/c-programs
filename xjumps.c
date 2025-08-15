#include <stdio.h>

int main() {
	// your code goes here
   int n;
   scanf("%d",&n);
   for(int i=0;i<n;i++)
   {
       int a,b;
       scanf("%d %d",&a,&b);
       if(!(a%b))
       printf("%d\n",a/b);
       else
       printf("%d\n",(a/b)+(a%b));
   }
}

