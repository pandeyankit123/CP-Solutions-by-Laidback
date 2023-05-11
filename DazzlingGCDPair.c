#include<stdio.h>
typedef long long ll;


int main()
{
    int t,a,b,p;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {   
        scanf("%d %d", &a, &b);
        p=b-a+1;
        if (p==2)
        {printf("-1\n");}
        else if (p==3)
        {
            if (a%2==0)
            {printf("%d %d\n", a, b);}
            else
            {printf("-1\n");}    
        }
        else
        {
            if (a%2==0)
            {printf("%d %d\n", a, a+2);}
            else if (a%3==0)
            {printf("%d %d\n", a, a+3);}
            else
            {printf("%d %d\n", a+1, a+3);}
        }
    }
    
    return 0;
}