#include<stdio.h>

void psort(long long array[], int n)
{
    int temp;
    temp = array[n];
    array[n] = array[n+1];
    array[n+1] = temp;
}

int main()
{
    long long t,n;
    scanf("%lli", &t);
    for (int i = 0; i < t; i++)
    {
       scanf("%lli", &n);
       long long arr[n];
       for (int i = 0; i < n; i++)
       {scanf("%lli", &arr[i]);}
       int flag=0;
       for (int i = 0; i < n-1; i++)
       {
            if (arr[i]>arr[i+1])
            {
                flag+=1;
                psort(arr, i);
            }
       }
       for (int i = 0; i < n; i++)
       {
            if (arr[i]>arr[i+1])
            {flag+=1;}
       }
       if (flag<=1)
       {printf("yes\n");}
       else
       {printf("no\n");}
    }
    return 0;
}