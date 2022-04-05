#include <stdio.h>
#include "defind.h"

void BubbleSort(recordtype a[], int n)
{
    int i, j;
    for (i = 0; i <= n - 2; i++)
    {
        for (j = n - 1; j >= i + 1; j--)
        {
            if (a[j].key < a[j - 1].key)
            {
                swap(&a[j], &a[j - 1]);
            }
        }
    }
}