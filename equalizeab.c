#include <stdio.h>

int main() {
	// your code goes here
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
	    int a,b,c;
	    scanf("%d %d %d",&a,&b,&c);
	    if((abs(a-b)%(2*c))==0)
	    printf("YES\n");
	    else
	    printf ("NO\n");
	}

}

