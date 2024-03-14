def conquer(a, s, m, l):
    merged_array = []
    si = s
    ei = m + 1
    c = 0

    # Merge the two halves into a temporary array
    while si <= m and ei <= l:
        if a[si] <= a[ei]:
            merged_array.append(a[si])
            si += 1
        else:
            merged_array.append(a[ei])
            ei += 1

    # Copy any remaining elements from the left half
    while si <= m:
        merged_array.append(a[si])
        si += 1
    # Copy any remaining elements from the right half
    while ei <= l:
        merged_array.append(a[ei])
        ei += 1

    # Copy the merged array back to the original array
    for i in range(len(merged_array)):
        a[s + i] = merged_array[i]


def divide(a, s, l):
    if s >= l:
        return  # Base case: array of size 1 or empty

    m = (s + l) // 2

    divide(a, s, m)
    divide(a, m + 1, l)

    conquer(a, s, m, l)


def merge_sort(a):
    divide(a, 0, len(a) - 1)


a = [4, 88, 99, 54, 87, 2, 9, 0, 1]
merge_sort(a)

print("The sorted array is:")
print("\t".join(map(str, a)))
