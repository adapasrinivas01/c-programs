#include <stdio.h>
int main() {

       int n;
        scanf("%d",&n);
       for(int i=0;i<n;i++)
       {
           int a,b,c,d,e,f;
           scanf("%d %d %d %d",&a,&b,&c,&d);
           e=abs(a-c);
           f=abs(b-d);
           if(e>=f)
           printf("%d\n",e);
           else
           printf("%d\n",f);
      
       }
       return 0;

}

