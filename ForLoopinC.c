#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{   int a,b;
    scanf("%d\n%d", &a, &b);

    char *arr[9]={"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    
    for (int i = a; i <= b; i++)
    {
        if (i<=9)
        {
            printf("%s\n", arr[i-1]);
        }
    
         else if (i%2==0)
            {
                printf("even\n");
            }
        else
            {
                printf("odd\n");
            }

    }
    return 0;
}
