#include<stdio.h>


int main()
{   
    int t,x;
    long long y,z;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &x);
        long long arr[x];
        for (int i = 0; i < x; i++)
        {scanf("%lli", &arr[i]);}

        long long sum=0;
        for (int i = 0; i < x; i++)
        {
            if(i==(x-1))
            {y=arr[i]+arr[0];}
            else
            {y=arr[i]+arr[i+1];}

            if(y>=sum)
            {sum=y;}
        }
        printf("%lli\n", sum);
    }
    return 0;
}