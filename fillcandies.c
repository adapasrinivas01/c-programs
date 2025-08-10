#include <stdio.h>

int main() {
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
	    int a,b,c;
	    scanf("%d %d %d",&a,&b,&c);
	    if(!(a%(b*c)))
	    printf("%d\n",a/(b*c));
	    else
	    printf("%d\n",(a/(b*c))+1);
	}
	return 0;

}

