#include<stdio.h>

int max(int a, int b)
{
    if (a>b)
    {return a;}
    else
    {return b;}
}

int main()
{
    int t,pa,pb,qa,qb,mp,mq;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d %d %d", &pa, &pb, &qa, &qb);
        mp=max(pa,pb);
        mq=max(qa,qb);
        if (mp==mq)
        {printf("TIE\n");}
        else if(mp<mq)
        {printf("P\n");}
        else if(mp>mq)
        {printf("Q\n");}
    }
    return 0;
}