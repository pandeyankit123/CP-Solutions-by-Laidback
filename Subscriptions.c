#include<stdio.h>


int main()
{
    int t,x,y,z;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d", &x, &y);
        if(x<=6)
        {printf("%d\n", y);}  
        else
        {   
            z=x/6;
            if(x%6==0)
            {printf("%d\n", (z*y));}
            else
            {printf("%d\n", ((z+1)*y));}
        }    
    }

    return 0;
}