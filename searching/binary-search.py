def binary_search(my_list, ele):
    low = 0
    high = len(my_list) - 1
    while low <= high:
        middle = low + (high - low) // 2
        if my_list[middle] == ele:
            return middle+1
        elif my_list[middle] < ele:
            low = middle + 1
        else:
            high = middle - 1
    return -1


my_list = [0, 1, 3, 4, 7, 8, 9]
ele = int(input())
pos = binary_search(my_list, ele)
if pos > 0:
    print("Element found at", pos)
else:
    print("Element not found")
