#include<stdio.h>

int main()
{
    int t,n,k;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d", &n, &k);
        if (n==1 && k==1)
        {printf("YES\n");}
        else if(n%2==0)
        {printf("YES\n");}
        else if(n%2!=0 && k==1)
        {printf("YES\n");}
        else
        {printf("NO\n");}
    }
    return 0;
}