#include<stdio.h>

int main()
{   
    int t;
    long long n,k;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%lli %lli", &n, &k);
        if (k==1)
        {   
            if(n%2==0)
            {printf("EVEN\n");}
            else
            {printf("ODD\n");}
        }
        else if(k==2)
        {printf("ODD\n");}
        else if(k%2!=0)
        {
            if((k-1)%2==0)
            {printf("EVEN\n");}
            else
            {printf("ODD\n");}
        }
        else if(k%2==0)
        {printf("EVEN\n");}
    }
    return 0;
}