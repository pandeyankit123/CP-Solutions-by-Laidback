#include<stdio.h>



int main()
{
    int t,x;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
       scanf("%d", &x);
       if (x<=1000)
       {printf("%d\n", 100);}
       else
       {printf("%d\n", x/10);}
    }
    return 0;
}