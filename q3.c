#include <stdio.h>

int main(int argc, char **argv)
{
	int a,b,c,x,y,z,sum;
	sum=0;
	x=0;
	y=1;
	z=2;
	int flag=0;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	do
	{
	if(a==x || b==y || c==z)
		flag=-1;
	else  
	{x++;y++;z++;}	
	}while(flag==0);
	sum=x+y+z;
	printf("%d",sum);
	return 0;
}
