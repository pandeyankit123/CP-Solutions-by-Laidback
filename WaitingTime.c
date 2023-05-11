#include<stdio.h>


int main()
{
    int t,x,y,ans;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d", &x, &y);
        x=x*7;
        printf("%d\n", x-y);
    }
    return 0;
}