#include <stdio.h>

int main() {
	// your code goes here
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
	    int a,c=0;
	    scanf("%d",&a);
	    for(int j=0;j<a;j++)
	    {
	        int b;
	        scanf("%d",&b);
	        if(b<=60 && b>=10)
	        c++;
	    }
	    printf("%d\n",c);
	}

}

