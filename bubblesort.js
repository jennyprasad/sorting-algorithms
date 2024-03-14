function sort(arr) {
    let n = arr.length;
    for (let i = 0; i < n; i++) {
        for (let j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap elements if they are in the wrong order
                let temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    console.log("The sorted array in ascending order is:");
    console.log(arr.join("\t"));
}

let arr = [1, 4, 5, 76, 89, 33, 55, 0, 21, 56];
sort(arr);
