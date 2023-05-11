#include<stdio.h>


int main()
{   
    int t,x,y,z;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d %d", &x, &y, &z);
        if(z>=x && z<y)
        {printf("YES\n");}
        else
        {printf("No\n");}
    }
    return 0;
}