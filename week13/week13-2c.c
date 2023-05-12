#include <stdio.h>
int main()
{
	int a,i,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a);
		printf("%d,",a*a);
	}
	printf("\n");
}

