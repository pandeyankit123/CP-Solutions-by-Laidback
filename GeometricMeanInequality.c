#include<stdio.h>


int main()
{
    int t,n,x,y;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
       scanf("%d", &n);
       int arr[n];
       x=0;
       y=0;
       for (int i = 0; i < n; i++)
       {
           scanf("%d", &arr[i]);
           if (arr[i]==1)
           {x+=1;}
           else
           {y+=1;}
       }
       if (x==y+1 || x==y+2)
       {printf("yes\n");}
       else if (y==x+1 || y==x+2)
       {printf("yes\n");}
       else if (x==y)
       {
           if (x%2==0)
           {printf("no\n");}
           else
           {printf("yes\n");}
       }
       else
       {printf("no\n");}
    }
    return 0;
}