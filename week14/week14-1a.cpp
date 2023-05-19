#include <stdio.h>
int main()
{
	int i,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i*i==n){
		printf("%d",i);
		return 0;
		}
	}
	printf("0");
	return 0;
}
