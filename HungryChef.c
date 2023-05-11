#include<stdio.h>

int main() 
{
    int t,x,y,n,r;
    scanf("%d", &t);
    for(int i=0; i<t; i++)
    {
        scanf("%d %d %d %d", &x, &y, &n, &r);
        if (r/y>=n)
        {printf("0 %d\n", n);}
        else if (r/x<n)
        {printf("-1\n");}
        else
        {
            int g=y*n;
            int f=x-y;
            int m=(r-g)/f;
            if ((r-g)%f!=0)
            {m++;}
            printf("%d %d\n", m, n-m);
        }
    }
    return 0;
}
