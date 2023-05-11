#include<stdio.h>



int main()
{
    int t,x,y,z,p,q,r;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d %d", &x, &y, &z);
        p=x*5;
        q=y*10;
        r=p+q;
        printf("%d\n", r/z);
    }
    return 0;
}