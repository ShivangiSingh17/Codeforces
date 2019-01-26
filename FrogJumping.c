#include <stdio.h>

int main()
{
long long a,b,k,t,i,l,o;
scanf("%I64d",&t);
for(i=0;i<t;i++)
{scanf("%I64d",&a);
scanf("%I64d",&b);
scanf("%I64d",&k);
if(k%2==0)
{l=k/2;
o=l*(a-b);
printf("%I64d\n",o);}
else
{l=k/2;
o=(l+1)*a-l*b;
printf("%I64d\n",o);}
}

    return 0;
}
