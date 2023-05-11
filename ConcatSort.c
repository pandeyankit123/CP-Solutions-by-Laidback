#include<stdio.h>

int main() 
{
    int t,n;
    scanf("%d", &t);
    for(int i=0; i<t; i++)
    {
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++)
        {scanf("%d", &arr[i]);}
        long long int index=-1, ele=-1;
        for (int i = 0; i < n-1; i++)
        {
            if (arr[i]>arr[i+1])
            {
                index=i+1;
                ele=arr[index];
                break;
            } 
        }
        if (index==-1 || index==n-1)
        {
            printf("YES\n");
            continue;
        }
        long long int lmx;
        for (int i = 0; i < index; i++)
        {
            if (arr[i]>ele)
            {
                lmx=arr[i];
                break;
            }
        }
        long long int rmx= arr[index-1];
        int i;
        for (i = index+1; i < n; i++)
        {
            if (arr[i]>=rmx)
            {rmx=arr[i];}
            else if (arr[i]<=lmx && arr[i]>=ele)
            {ele = arr[i];}
            else
            {
                printf("NO\n");
                break;
            }
        }
        if (i==n)
        {printf("YES\n");}
    }
    return 0;
}