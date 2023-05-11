#include<stdio.h>

int main()
{
    int t,n,m,k;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        scanf("%d %d %d", &n, &m, &k);

        if ((n+k)<=m)
        {printf("YES\n");}
        else
        {printf("NO\n");}        
    }
    
    return 0;   
}