value = [81, 24, 4783, 38, -37, 10]
size = len(value)


def selectionSort(array, size):

    for i in range(size):
        min = i

        for j in range(i + 1, size):

            if array[j] < array[min]:
                min = j

        (array[i], array[min]) = (array[min], array[i])


selectionSort(value, size)
print(value)
