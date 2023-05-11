#include<stdio.h>

int main()
{
    int t,n,k,x,y;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d %d %d", &n, &k, &x, &y);
        if(y<x)
        {printf("%d\n", (x*k)+(y*(n-k)));}
        else
        {printf("%d\n", (x*k)+(x*(n-k)));}
    }
    return 0;
}