#include<stdio.h>



int main()
{
    int t,x,y,m;

    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        scanf("%d %d %d", &x, &y, &m);
        if ((x*m)<y)
        {printf("yes\n");}
        else
        {printf("no\n");}
    }
    
    return 0;
}