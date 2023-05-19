#include <stdio.h>
int main()
{
	int n,a[100]={0},m;
	scanf("%d",&m);
	for(n=0;n<m;n++)
	{
		scanf("%d",&a[n]);
	}
	for(n;n>=0;n--)
	{
		if(a[n]%2==1)
			printf("%d ",a[n]);
		}
}
