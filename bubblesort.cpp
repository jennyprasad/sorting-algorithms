#include <iostream>
using namespace std;

void sort(int a[], int n) {
    int i, j, temp;
    
    for (i = 0; i < n; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                // Swap elements if they are in the wrong order
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    cout << "The sorted array in ascending order is:" << endl;
    for (i = 0; i < n; i++) {
        cout << a[i] << "\t";
    }
}

int main() {
    int arr[] = {1, 4, 5, 76, 89, 33, 55, 0, 21, 56};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, n);
    return 0;
}
