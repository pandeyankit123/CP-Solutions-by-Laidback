#include<stdio.h>

int main()
{
    int t,n,k,m;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d %d", &n, &k, &m);
        if(n%(k*m)==0)
        {printf("%d\n", n/(k*m));}
        else
        {printf("%d\n", n/(k*m)+1);}
    }
    return 0;
}