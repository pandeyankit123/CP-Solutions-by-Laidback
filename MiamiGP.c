#include<stdio.h>

int main()
{
    int t,a,b;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d", &a, &b);
        float x = (float)a*1.07;
        if (b<=x)
        {printf("YES\n");}
        else
        {printf("NO\n");}
    }
    return 0;
}