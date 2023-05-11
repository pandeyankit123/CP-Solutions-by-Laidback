#include<stdio.h>

int main()
{
    int t,n,m;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d", &n, &m);
        if(n%2==0 && m%2==0)
        {printf("0\n");}
        else if(n%2==0 && m%2==1)
        {printf("%d\n", n);}
        else if(m%2==0 && n%2==1)
        {printf("%d\n", m);}
        else if(m%2==1 && n%2==1)
        {printf("%d\n", n+m-1);}
    }
    return 0;
}