class SelectionSort {
    static sort(a) {
        for (let i = 0; i < a.length - 1; i++) {
            let min = i;
            for (let j = i + 1; j < a.length; j++) {
                if (a[min] > a[j]) {
                    min = j;
                }
            }

            let temp = a[min];
            a[min] = a[i];
            a[i] = temp;
        }

        console.log("The sorted array is:");
        for (let i = 0; i < a.length; i++) {
            console.log(a[i] + "\t");
        }
    }
}

let a = [1, 4, 5, 76, 89, 33, 55, 0, 21, 56];
SelectionSort.sort(a);
