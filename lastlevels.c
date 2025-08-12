#include <stdio.h>

int main() {
	
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
	    int a,b,c;
	    scanf("%d %d %d",&a,&b,&c);
	    if(a<=3)
	    printf("%d\n",a*b);
	     else 
	     printf("%d\n",(a*b)+(((a-1)/3)*c));
	    
	}

}

