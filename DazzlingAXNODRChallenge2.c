#include<stdio.h>


int main()
{
    int t,n;
    scanf("%d", &t);

    for(int i=0; i<t; i++)
    {
        scanf("%d", &n);
        
        if (n%4==0)
        {printf("%d\n", n+3);}
        else if (n%4==1)
        {printf("%d\n", n);}
        else
        {printf("3\n");}
    }

    return 0;
}