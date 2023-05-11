#include <stdio.h>


void rev(int n, int array[])
{
    int temp, z;
    z = n - 1;
    for (int i = 0; i < (n / 2); i++)
    {
        temp = array[i];
        array[i] = array[z - i];
        array[z - i] = temp;
    }
}

int main()
{
    int num;
    scanf("%d", &num);
    int arr[num];
    for (int t = 0; t < num; t++)
    {
        scanf("%d", &arr[t]);
    }

    rev(num, arr);

    for (int x = 0; x < num; x++)
    {
        printf("%d ", arr[x]);
    }

    return 0;
}
