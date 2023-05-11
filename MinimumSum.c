#include<stdio.h>

int min(int n, int a[])
{   
    int ans=a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i]>=0 && a[i]<=ans)
        {ans=a[i];}
    }
    return ans;
}

int main()
{   
    int t,n,final;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {   
        scanf("%d", &n);
        int a[n];
        for (int i = 0; i < n; i++)
        {scanf("%d", &a[i]);}
        final=min(n, a);
        for (int i = 0; i < n; i++)
        {
            if (a[i]%final!=0)
            {
                final=1;
                break;
            }
        }
        printf("%d\n", final*n);
    }
    return 0;
}