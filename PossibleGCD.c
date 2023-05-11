#include<stdio.h>


int main()
{
    int t,x,y,z;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d", &x, &y);
        long long s=0;
        z=x-y;
        if (z<0)
        {z=z*-1;}
        
        for (int i = 1; i*i <= z; i++)
        {
           if(z%i==0)
            {
               if (z/i==i)
               {s++;}
               else
               {s+=2;}
            }
        }
        printf("%d\n", s);
    }
    return 0;
}