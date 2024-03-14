#include <iostream>
#include <vector>
using namespace std;

void conquer(vector<int>& a, int s, int m, int l) {
    vector<int> mergedArray(l - s + 1);
    int si = s;
    int ei = m + 1;
    int c = 0;

    // Merge the two halves into a temporary array
    while (si <= m && ei <= l) {
        if (a[si] <= a[ei]) {
            mergedArray[c++] = a[si++];
        } else {
            mergedArray[c++] = a[ei++];
        }
    }

    // Copy any remaining elements from the left half
    while (si <= m) {
        mergedArray[c++] = a[si++];
    }
    // Copy any remaining elements from the right half
    while (ei <= l) {
        mergedArray[c++] = a[ei++];
    }

    // Copy the merged array back to the original array
    for (int i = 0; i < c; i++) {
        a[s + i] = mergedArray[i];
    }
}

void divide(vector<int>& a, int s, int l) {
    if (s >= l) {
        return; // Base case: array of size 1 or empty
    }

    int m = (s + l) / 2;

    divide(a, s, m);
    divide(a, m + 1, l);

    conquer(a, s, m, l);
}

int main() {
    vector<int> a = {4, 88, 99, 54, 87, 2, 9, 0, 1};
    int n = a.size();

    divide(a, 0, n - 1);

    cout << "The sorted array is:" << endl;
    for (int i = 0; i < n; i++) {
        cout << a[i] << "\t";
    }
    cout << endl;

    return 0;
}
