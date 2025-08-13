#include <stdio.h>

int main() {
	// your code goes here
   int n;
   scanf("%d",&n);
   for(int i=0;i<n;i++)
   {
       int m,ac=0,sc=0;
       scanf("%d",&m);
       int arr[m];
       for(int j=0;j<m;j++)
       {
           scanf("%d",&arr[j]);
           if(arr[j]==1)
           ac++;
           else
           sc++;
       }
       if(m%2!=0)
       printf("%d\n",-1);
       else
       printf("%d\n",(abs(ac-sc))/2);
  
       
   }
}


