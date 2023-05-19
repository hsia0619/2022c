#include <stdio.h>
int main()
{
	int speed[10],n,s,i,r,m;
	for(n=0;n<10;n++)scanf("%d",&speed[n]);
	i=speed[0];
	for(n=0;n<10;n++)
	{
		if(i>speed[n])
		{
			i=speed[n];
			s=n+1;
		}
	m=(((1200000/i)*36)/10000);
	r=m;
	}
	printf("%d %d\n",s,m);
}
