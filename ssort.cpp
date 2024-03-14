#include <iostream>
using namespace std;

class SelectionSort {
public:
    static void sort(int a[], int size) {
        for (int i = 0; i < size - 1; i++) {
            int min = i;
            for (int j = i + 1; j < size; j++) {
                if (a[min] > a[j]) {
                    min = j;
                }
            }

            int temp = a[min];
            a[min] = a[i];
            a[i] = temp;
        }

        cout << "The sorted array is:\n";
        for (int i = 0; i < size; i++) {
            cout << a[i] << "\t";
        }
    }
};

int main() {
    int a[] = {1, 4, 5, 76, 89, 33, 55, 0, 21, 56};
    int size = sizeof(a) / sizeof(a[0]);

    SelectionSort::sort(a, size);

    return 0;
}
