#include<stdio.h>
int main() 
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int a,b,c,d;
        scanf("%d %d %d",&a,&b,&c);
        d=a+b+c;
        if(a<=b && a<=c)
        printf("%d\n",d-a);
        else if(b<=a && b<=c)
        printf("%d\n",d-b);
        else
        printf("%d\n",d-c);
        
    }
    return 0;
}
