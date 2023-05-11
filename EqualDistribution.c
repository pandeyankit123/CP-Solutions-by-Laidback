#include<stdio.h>


int main()
{   
    int t,x,y;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d", &x, &y);
        if((x+y)%2==0)
        {printf("YES\n");}
        else
        {printf("No\n");}
    }
    return 0;
}