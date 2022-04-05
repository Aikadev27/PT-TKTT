
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
