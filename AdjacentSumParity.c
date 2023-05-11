#include<stdio.h>


int main()
{
    int t,n;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &n);
        int b[n];
        int sum=0;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &b[i]);
            if(b[i]==1)
            {sum++;}
        }
        
        if(sum%2==0)
        {printf("YES\n");}
        else
        {printf("NO\n");}
    }
    return 0;
}