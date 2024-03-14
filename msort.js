function conquer(a, s, m, l) {
    let mergedArray = [];
    let si = s;
    let ei = m + 1;
    let c = 0;

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
    for (let i = 0; i < mergedArray.length; i++) {
        a[s + i] = mergedArray[i];
    }
}

function divide(a, s, l) {
    if (s >= l) {
        return; // Base case: array of size 1 or empty
    }

    let m = Math.floor((s + l) / 2);

    divide(a, s, m);
    divide(a, m + 1, l);

    conquer(a, s, m, l);
}

function mergeSort(a) {
    divide(a, 0, a.length - 1);
}

let a = [4, 88, 99, 54, 87, 2, 9, 0, 1];
mergeSort(a);

console.log("The sorted array is:");
console.log(a.join("\t"));
