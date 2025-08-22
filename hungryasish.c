#include <stdio.h>

int main() {
	// your code goes here
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
	    int a,b,c;
	    scanf("%d %d %d",&a,&b,&c);
	    if(b<=a)
	    printf("PIZZA\n");
	    else if(c<=a && b>a)
	    printf("BURGER\n");
	    else
	    printf("NOTHING\n");
	    
	}

}

