#include<stdio.h>


int main()
{   
    int t,x;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &x);
        int arr[x];
        int sum=0;
        for (int i = 0; i < x; i++)
        {
            scanf("%d", &arr[i]);
            sum+=arr[i];
        }
        
        if(sum<0)
        {sum=sum*-1;}
        
        if(x%2==0)
        {printf("%d\n",sum/2);}
        else
        {printf("-1\n");}
    }
    return 0;
}