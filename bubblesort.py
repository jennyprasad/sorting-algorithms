def sort(arr):
    n = len(arr)
    for i in range(n):
        for j in range(0, n-i-1):
            if arr[j] > arr[j+1]:
               
                arr[j], arr[j+1] = arr[j+1], arr[j]

    print("The sorted array in ascending order is:")
    print("\t".join(map(str, arr)))

arr = [1, 4, 5, 76, 89, 33, 55, 0, 21, 56]
sort(arr)
