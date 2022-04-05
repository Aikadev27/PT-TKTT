#include <stdio.h>
#include "defind.h"

void HeapSort(recordtype a[], int n)
{
    int i;
    // tạo heap
    for (i = (n - 2) / 2; i >= 0; i--)
    {
        PushDown(a, i, n - 1);
    }
    //  Sort
    for (i = n - 1; i >= 2;)
    {
        swap(&a[0], &a[i]);
        PushDown(a, 0, i - 1);
    }
    swap(&a[0], &a[1]);
}