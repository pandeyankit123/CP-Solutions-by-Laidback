#include <stdio.h>

int main() 
{
	int t,x,y;
	scanf("%d", &t);
	for(int i; i<t; i++)
	{
	    scanf("%d %d", &x, &y);
	    if(x>=y)
	    {printf("%d\n", y);}
	    else
	    {printf("%d\n", x);}
	}
	return 0;
}

