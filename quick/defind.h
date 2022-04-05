
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

int FindPivot(recordtype a[], int i, int j)
{
    keytype firstkey;
    int k = i + 1;
    firstkey = a[i].key;
    while ((k <= j) && (a[k].key) == firstkey)
    {
        if (k > j)
            return -1;
        else if (a[k].key > firstkey)
        {
            return k;
        }
        else
            return i;
    }
}
int Partition(recordtype a[], int i, int j, keytype pivot)
{
    int L = i, R = j;
    while (L <= R)
    {
        while (a[L].key < pivot)
            L++;
        while (a[R].key >= pivot)
            R--;
    }
    return L;
}