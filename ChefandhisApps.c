#include<stdio.h>


int main()
{
    int t,s,x,y,z;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d %d %d", &s, &x, &y, &z);

        if(x+y+z<=s)
        {printf("0\n");}
        else if(x+z<=s || y+z<=s)
        {printf("1\n");}
        else
        {printf("2\n");}
    }
    return 0;
}