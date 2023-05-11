#include <stdio.h>

int main()
{
    int t,n,k,f;
    
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        scanf("%d %d", &n, &k);
        int arr[n];
        for (int j = 0; j < n; j++)
        {scanf("%d", &arr[j]);}

        for (int k=0; k<n-1; k++)
        {
            for (int l=k+1; l<n; l++)
            {
                if (arr[k] > arr[l])
                {
                    f = arr[k];
                    arr[k] = arr[l];
                    arr[l] = f;
                }
            }
        }
        if(k>=n){
            printf("%d\n",arr[n-1]);
        }
        
        else{
        
        printf("%d\n",arr[k]);
        }
       
    }
    
    return 0;   
}