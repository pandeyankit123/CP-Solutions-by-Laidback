#include <stdio.h>

int main()
{
    int t,n,m;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        scanf("%d %d", &n, &m);
        if (n<m)
        {
            m=n;
            printf("%d\n", 2*n-m);
        }
        else
        {printf("%d\n", 2*n-m);}
    }
    
    return 0;   
}