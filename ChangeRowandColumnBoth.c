#include<stdio.h>


int main()
{
    int t,s,x,y,z;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d %d %d", &s, &x, &y, &z);
        int sum=0;
        if(s==y)
        {sum++;}
        if(x==z)
        {sum++;}
        if(sum>0)
        {s--;}
        printf("%d\n", sum+1);
    }
    return 0;
}