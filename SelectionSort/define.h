
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
void input(int a[], int n)
{
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
}
void output(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%5d", a[i]);
        printf("\n");
    }
}