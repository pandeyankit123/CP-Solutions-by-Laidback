#include<stdio.h>

int main() 
{
    int t,a,b,n;
    scanf("%d", &t);
    for(int i=0; i<t; i++)
    {
        scanf("%d %d %d", &a, &b, &n);
        if (a%b==0)
        {
            printf("-1\n");
            continue;
        }
        int x=n;
        if (x%a!=0)
        {x=n+a-(x%a);}
        while (!(x%a==0 && x%b!=0))
        {x+=a;}
        printf("%d\n", x);
    }
    return 0;
}