#include <stdio.h>
#include "defind.h"

void QuickSort(recordtype a[], int i, int j)
{
    keytype pivot;
    int pivotindex, k;
    pivotindex = FindPivot(a, i, j);
    if (pivotindex != -1)
    {
        pivot = a[pivotindex].key;
        k = Partition(a, i, j, pivot);
        QuickSort(a, i, k - 1);
        QuickSort(a, k, j);
    }
}