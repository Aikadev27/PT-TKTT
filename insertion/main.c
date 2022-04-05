#include <stdio.h>
#include "define_in.h"
void InsertionSort(recordtype a[], int n)
{
    int i, j;
    for (i = 0; i <= n - 1; i++)
    {
        j = i;
        while (j > 0 && (a[j].key < a[j - 1].key))
        {
            swap(&a[j], &a[j - 1]);
            j--;
        }
    }
}