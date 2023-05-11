#include<stdio.h>


int main()
{
    int t;
    long long n,x,y,z,lcm,gcd;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%lli", &n);
        if(n==2)
        {printf("0\n");}
        else if (n%2!=0)
        {
            x=n/2;
            y=n-x;
            lcm=x*y;
            {printf("%lli\n", lcm-1);}
        }
        else if (n%2==0)
        {
            if (n%4==0)
            {
                x=(n/2)+1;
                y=n-x;
                lcm=x*y;
                printf("%lli\n", lcm-1);
            }
            else
            {
                x=((n-4)/2);
                y=n-x;
                lcm=x*y;
                printf("%lli\n", lcm-1);
            }
        }
    }
    return 0;
}