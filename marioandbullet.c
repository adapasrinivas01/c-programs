#include <stdio.h>

int main() {
	// your code goes here
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
	    int a,b,c,d;
	    scanf("%d %d %d",&a,&b,&c);
	    d=c-(b/a);
	    if((b/a)>=c)
	    printf("%d\n",0);
	    else
	    printf("%d\n",d);
	}

}

