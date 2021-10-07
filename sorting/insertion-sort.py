def insertion_sort(alist1):
    for i in range(1, len(alist1)):
        temp = alist1[i]
        j = i - 1
        while j >= 0 and temp < alist1[j]:
            alist1[j + 1] = alist1[j]
            j = j - 1
        alist1[j + 1] = temp


list1 = input('Enter the list of numbers: ').split()
list1 = [int(x) for x in list1]
insertion_sort(list1)
print('Sorted list: ', end='')
print(list1)
