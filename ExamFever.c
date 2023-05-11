#include <stdio.h>

int main()
{
    int t,n,k,a,x;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d", &n, &k);
        int arr[n];
        for(int i=0; i<n; i++)
        {scanf("%d", &arr[i]);}
        a=n-k;
        x=0;
        if(a>0)
        {
            for(int i=0; i<a-1; i++)
            {x=x+arr[n-i];}
            printf("%d", x);
        }
    }
    return 0;
}