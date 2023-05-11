#include<stdio.h>



int main()
{
    int t,a,b;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d", &a, &b);
        if (a==b && a>=1)
        {printf("YES\n");}
        else
        {printf("NO\n");}
    }
    return 0;
}