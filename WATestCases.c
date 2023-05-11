#include<stdio.h>

int min(int n, int a[])
{   
    int ans=100;
    for (int i = 0; i < n; i++)
    {
        if (a[i]<=ans)
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
        int s[n],a[n];
        for (int i = 0; i < n; i++)
        {scanf("%d", &s[i]);}
        char v[n];
        scanf("%s", v);
        for (int i = 0; i < n; i++)
        {a[i]=100;}
        for (int i = 0; i < n; i++)
        {
            if(v[i]=='0')
            {a[i]=s[i];}
        }
        final=min(n, a);
        printf("%d\n", final);
    }
    return 0;
}