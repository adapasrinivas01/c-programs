#include <stdio.h>

int main() {
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
	    int a,b,c,d;
	    scanf("%d %d %d %d",&a,&b,&c,&d);
	    if((a+c)==180 && (b+d)==180)
	    printf("YES\n");
	    else
	    printf("NO\n");
	}
}

