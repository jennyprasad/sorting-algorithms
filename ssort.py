class SelectionSort:
    @staticmethod
    def sort(a):
        for i in range(len(a) - 1):
            min_idx = i
            for j in range(i + 1, len(a)):
                if a[min_idx] > a[j]:
                    min_idx = j

            a[i], a[min_idx] = a[min_idx], a[i]

        print("The sorted array is:")
        for num in a:
            print(num, end="\t")

if __name__ == "__main__":
    a = [1, 4, 5, 76, 89, 33, 55, 0, 21, 56]
    SelectionSort.sort(a)
