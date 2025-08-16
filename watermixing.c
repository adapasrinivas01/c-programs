#include <stdio.h>

int main() {
	// your code goes here
    int n;
    scanf("%d",&n);
    for( int i=0;i<n;i++)
    {
        int a,b,x,y;
        scanf("%d %d %d %d ",&a,&b,&x, &y);
        if(a==b)
        printf("Yes\n");
        else if (a<b && (a+x)>=b)
        printf("Yes\n");
        else if(b<a && (a-y)<=b) 
        printf("Yes\n");
        else
        printf("No\n");
    }
}      

