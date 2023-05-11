#include <stdio.h>

int main()
{
    int t,f;
    int arr[2];

    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        for (int m=0; m<2; m++)
        {scanf("%d", &arr[m]);}
        for (int k=0; k<1; k++)
        {
            for (int l=k+1; l<2; l++)
            {
                if (arr[k] > arr[l])
                {
                    f = arr[k];
                    arr[k] = arr[l];
                    arr[l] = f;
                }
            }
        }
    
        int z;
        z=arr[1]-arr[0];
        printf("%d\n", z);
    }
    
    return 0;
}