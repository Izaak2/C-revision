#include <stdio.h>

int main()
{
    int arr [5];

    int *ptr = arr; // &arr
    int v = 2;

    for(; ptr < &arr[5] ; ptr++)
    {
        *ptr = v;
        v = v * 2;
    }
    
    for(int i = 0 ; i < 5 ; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}
