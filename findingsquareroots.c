#include <stdio.h>
#include<math.h>
int main() {
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
	    int a;
	    scanf("%d",&a);
	    printf("%d\n",(int)sqrt(a));
	}
	return 0;
}

