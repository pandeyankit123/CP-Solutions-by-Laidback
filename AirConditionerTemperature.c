#include<stdio.h>

int main()
{   
    int t,a,b,c;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d %d", &a, &b, &c);
        if(a<=b && c<=b)
        {printf("yes\n");}
        else
        {printf("no\n");}
    }
    return 0;
}