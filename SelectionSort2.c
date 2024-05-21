#include <stdio.h>
#define SIZE 10

int main()
{

    int a[] = {32, 22, 11, 44, 55, 88, 64, 77, 9, 35};
    int i, min, j, tmp;

    printf("\nArray Before Sorting : ");
    for (i = 0; i < SIZE; i++)
    {
        printf(" %d", a[i]);
    }

    for (i = 0; i < SIZE; i++)
    {
        min = i;
        for (j = i + 1; j < SIZE; j++)
        {
            if (a[min] > a[j])
            {
                min = j;
            }
        }
        tmp = a[i];
        a[i] = a[min];
        a[min] = tmp;
    }

    printf("\nArray After Sorting : ");
    for (i = 0; i < SIZE; i++)
    {
        printf(" %d", a[i]);
    }

    return 0;
}