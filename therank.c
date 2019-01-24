#include <stdio.h>

int main(int argc, char **argv)
{
	int id,s,s1,a,b,c,d,r,i;
	r=1;
	scanf("%d",&id);
	for (i=1;i<=id;i++)
	{
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	scanf("%d",&d);
	s=a+b+c+d;
	if(i==1)
	s1=s;
	else if (s>s1)
	r++;
	}
	printf("%d",r);
	return 0;
}
	
