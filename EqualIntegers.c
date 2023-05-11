#include<stdio.h>

int main()
{
    int t,x,y,z,p,q,r;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d", &x, &y);
        if (x==y)
        {printf("0\n");}
        else if(x<y)
        {printf("%d\n", y-x);}
        else if(x>y)
        {
            if ((x-y)%2==0)
            printf("%d\n", (x-y)/2);
            else
            {
                y=y+1;
                z=x-y;
                printf("%d\n", (z/2)+2);
            }
        }
    }
    return 0;
}