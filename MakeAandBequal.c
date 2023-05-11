#include<stdio.h>

int min(int a, int b)
{
    if (a<b)
    {return a;}
    else
    {return b;}
}
int max(int a, int b)
{
    if (a<b)
    {return b;}
    else
    {return a;}
}

int main()
{
    int t,a,b,x,y;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {   
        scanf("%d %d", &a, &b);
        x=min(a,b);
        y=max(a,b);
        int flag=1;
        if (a==b)
        {flag=0;}
        else
        {   
            for(int i=1; i < y; i++)
            {
                x*=2;
                if(x==y)
                {
                    flag=0;
                    break;
                }
            }
        }
        if (flag==0)
        {printf("yes\n");}
        else
        {printf("no\n");}
    }
    return 0;
}


