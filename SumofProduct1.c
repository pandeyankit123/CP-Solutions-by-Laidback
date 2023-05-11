#include<stdio.h>

int main()
{
    int t,n;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &n);
        int arr[n];
        long long int c=0, ans=0;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
            if (arr[i]==0)
            {c=0;}
            else
            {
                c++;
                ans+=c;
            }
        }
        printf("%lli\n", ans);
    }
    return 0;
}