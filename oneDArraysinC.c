#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n, sum;
    scanf("%d", &n);
    int a[n];
    sum=0;
    for (int i; i<n; i++)
    {
        scanf("%d", &a[i]);
        sum+=a[i];
    }
    
    printf("%d", sum);
    
    return 0;
}
