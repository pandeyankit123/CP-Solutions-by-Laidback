#include<stdio.h>
 
 
int main()
{
    int t,n;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &n);
        int arr[n];
        int x=0,y=0,z;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
            if(arr[i]%2==0)
            {x+=1;}
            else
            {y+=1;}
        }
        
        if (x>y)
        {z=y;}
        else
        {z=x;}
        
        printf("%d\n", z);   
    }
 
    return 0;
}