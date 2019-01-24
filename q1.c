#include <stdio.h>

int main(int argc, char **argv)
{ 
	int a,b,count=0;
	scanf("%d",&a);
	scanf("%d",&b);
	do
	{
		count++;
		a=a*3;
		b=b*2;
		}while(a<=b);
		printf("%d",count);
	return 0;
}

