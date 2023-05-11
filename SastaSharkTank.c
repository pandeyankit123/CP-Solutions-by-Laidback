#include<stdio.h>



int main()
{
    int t,a,b;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
       scanf("%d %d", &a, &b);
       if (2*a>b)
       {printf("first\n");}
       else if (2*a<b)
       {printf("second\n");}
       else
       {printf("any\n");}
    }
    return 0;
}