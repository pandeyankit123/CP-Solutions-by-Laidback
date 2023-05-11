#include<stdio.h>


int main()
{
    int t,x,y,z;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d", &x, &y);
        z=y-x;
        if(z%3==0 || (z-1)%3==0)
        {printf("YES\n");}  
        else
        {printf("NO\n");}
    }

    return 0;
}