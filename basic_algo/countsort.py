value = [81, 24, 4783, 38, -37, 10]

def countingSort(arr):
    if len(arr) == 0:
        return

    # Find min and max values
    min_val = min(arr)
    max_val = max(arr)

    # Create count array
    range_of_elements = max_val - min_val + 1
    count = [0] * range_of_elements

    # Store the count of each element
    for num in arr:
        count[num - min_val] += 1

    # Rebuild the sorted array
    index = 0
    for i in range(len(count)):
        while count[i] > 0:
            arr[index] = i + min_val
            index += 1
            count[i] -= 1


countingSort(value)
print(value)