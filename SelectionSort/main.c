#include <stdio.h>
#include "define.h"

void SelectionSort(recordtype a[], int n)
{

    int i, j, lowindex;
    keytype lowkey;
    for (i = 0; i <= n - 2; i++)
    {
        lowkey = a[i].key;
        lowindex = i;
        for (j = i + 1; j <= n - 1; j++)
        {
            if (a[j].key < lowkey)
                lowkey = a[j].key;
            lowindex = j;
        }
        swap(&a[i], &a[lowindex]);
    }
}
// int main()
// {
//     int a[20], n;
//     input(a,n);

//     printf(" before sort\n");
//     output(a,n);
//     printf("after sort\n");
//     SelectionSort(a,&n);
//     output(a,n);
//     return 0;
// }