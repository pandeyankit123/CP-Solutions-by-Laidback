#include<stdio.h>


// int solve(int n)
// {
//     int sum=1;
//     for (int i = 0; i <= n; i++)
//     {
//         if (i%2==0)
//         {sum=sum^i;}
//         else
//         {sum=sum&i;}    
//     }
//     return sum;
// }

int bits(int n)
{   
    int z;
    if (n==2)
    {z=3;}
    else
    {
        if (n%2==0)
        {z=bits(n-1)^n;}
        else
        {z=bits(n-1)&n;}
    }

    return z;
}

int main()
{
    int t,n,b;
    scanf("%d", &t);

    for(int i=0; i<t; i++)
    {
        scanf("%d", &n);
        b=bits(n);
        printf("%d\n", b);
    }

    return 0;
}