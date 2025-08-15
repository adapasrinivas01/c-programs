#include <stdio.h>

int main() {
	// your code goes here
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
	    int a,b;
	    scanf("%d %d",&a,&b);
	    int c=(a+b)/2;
	    if (c%2==0)
	    printf("Alice\n");
	    else
	    printf("Bob\n");
	    
	}

}

