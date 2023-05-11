#include<stdio.h>


int main()
{   
    int t,x,y;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d", &x, &y);
        int sum=0;
        while (x%3!=0 && y%3!=0)
        {
            if (x<y)
            {
                y=x-y;
                if (y<0)
                {y=y*-1;}
            }
            else
            {
                x=x-y;
                if (x<0)
                {x=x*-1;}
            }
            sum+=1;
        }
        
        printf("%d\n",sum);
    }
    return 0;
}               