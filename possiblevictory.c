#include <stdio.h>

int main() {
	// your code goes here
        int r,o,c;
        scanf("%d %d %d",&r,&o,&c);
        int total=((20-o)*6)*6+c;
        if(r<total)
        printf("Yes\n");
        else
        printf("No\n");
        return 0;
    }

