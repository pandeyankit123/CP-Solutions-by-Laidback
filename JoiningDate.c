#include<stdio.h>


int main()
{
    int t,x,y,z,ans,f;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d", &x, &y);
        ans=x/5;
        z=y/5;
        if(x%5!=0)
        {ans++;}
        if(y%5!=0)
        {z++;}

        printf("%d\n", ans-z);
    }
    return 0;
}