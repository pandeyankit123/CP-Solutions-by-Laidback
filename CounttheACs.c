#include<stdio.h>
#include<string.h>


int main()
{
    int t,x,y,z;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &x);
        y=x/100;
        z=x-y*100;
        if(z<=10-y)
        {printf("%d\n", y+z);}
        else
        {printf("-1\n");}
    }
    return 0;
}