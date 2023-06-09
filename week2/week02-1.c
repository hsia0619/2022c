#include <stdio.h>D
int main()
{
	int a,b;

	while(	scanf("%d%d", &a, &b)==2){
		int ans = b - a;
		printf("%d\n", ans);
	}
}
