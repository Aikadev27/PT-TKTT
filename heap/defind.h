
typedef int keytype;
typedef float othertype;

typedef struct
{
    keytype key;
    othertype otherfield;
} recordtype;

void swap(recordtype *x, recordtype *y)
{
    recordtype temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void PushDown(recordtype a[], int first, int last)
{
    int r = first;
    while (r <= (last - 1) / 2)
    {
        if (last == 2 * r + 1)
            if (a[r].key > a[last].key)
            {
                swap(&a[r], &a[last]);
                r = last;
            }
            else if ((a[r].key > a[2 * r + 1].key) && (a[2 * r + 1].key <= a[2 * r + 2].key))
            {
                swap(&a[r], &a[2 * r + 1]);
                r = 2 * r + 1;
            }
            else if ((a[r].key > a[2 * r + 2].key) && (a[2 * r + 2].key < a[2 * r + 1].key))
            {
                swap(&a[r], &a[2 * r + 2]);
                r = 2 * r + 2;
            }
            else
            {
                r = last;
            }
    }
}