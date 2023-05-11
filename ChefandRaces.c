#include<stdio.h>

int race( int a, int b, int c)
{
    if (a==b || a==c)
    {return 0;}
    else
    {return 1;}
}

int main()
{
   int T,X,Y,A,B,P,Q;

   scanf("%d", &T);

   for (int i = 0; i < T; i++)
   {
       scanf("%d    %d    %d    %d", &X, &Y, &A, &B);

        P=race(X, A, B);
        Q=race(Y, A, B);
   
        printf("%d\n", P+Q);
   }
   
   return 0;
}
