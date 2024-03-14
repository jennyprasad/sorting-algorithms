#include <stdio.h>

void selectionSort(int a[], int n) {
    int i, j, min, temp;
    for (i = 0; i < n - 1; i++) {
        min = i;
        for (j = i + 1; j < n; j++) {
            if (a[min] > a[j]) {
                min = j;
            }
        }
        temp = a[min];
        a[min] = a[i];
        a[i] = temp;
    }

    printf("The sorted array is:\n");
    for (i = 0; i < n; i++) {
        printf("%d\t", a[i]);
    }
}

int main() {
    int a[] = {1, 4, 5, 76, 89, 33, 55, 0, 21, 56};
    int n = sizeof(a) / sizeof(a[0]);

    selectionSort(a, n);

    return 0;
}
