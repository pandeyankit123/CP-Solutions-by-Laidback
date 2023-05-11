#include<stdio.h>


int main()
{
    int t;
    long long x,y;
    long long ans;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%lli %lli", &x, &y);
        if (x==1)
        {ans=0;}
        else if (x!=y)
        {ans=(x-1)*(2*y-x);}
        else
        {ans=(x-1)*y;}
        printf("%lli\n", ans);
    }
    return 0;
}