
value = [81, 24 , 4783, 38, -37, 10]

def insertionSort(arr):

    for i in range(1, len(arr)):
        ins = arr[i]
        j = i - 1
                
        while j >= 0 and ins < arr[j]:
            arr[j + 1] = arr[j]
            j = j - 1
        
        arr[j + 1] = ins


insertionSort(value)
print(value)