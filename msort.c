#include <stdio.h>

void conquer(int a[], int s, int m, int l) 
{
    int mergedArray[l - s + 1];
    int si = s;
    int ei = m + 1;
    int c = 0;

    
    while (si <= m && ei <= l) 
    {
        if (a[si] <= a[ei]) 
        {
            mergedArray[c++] = a[si++];
        } else {
            mergedArray[c++] = a[ei++];
        }
    }

    
    while (si <= m) 
    {
        mergedArray[c++] = a[si++];
    }
    
    while (ei <= l) 
    {
        mergedArray[c++] = a[ei++];
    }

   
    for (int i = 0; i < c; i++) 
    {
        a[s + i] = mergedArray[i];
    }
}

void divide(int a[], int s, int l) 
{
    if (s >= l) 
    {
        return; 
    }

    int m = (s + l) / 2;

    divide(a, s, m);
    divide(a, m + 1, l);

    conquer(a, s, m, l);
}

int main() 
{
    int a[] = {4, 88, 99, 54, 87, 2, 9, 0, 1};
    int n = sizeof(a) / sizeof(a[0]);

    divide(a, 0, n - 1);

    printf("The sorted array is:\n");
    for (int i = 0; i < n; i++) 
    {
        printf("%d\t", a[i]);
    }
    printf("\n");

    return 0;
}
