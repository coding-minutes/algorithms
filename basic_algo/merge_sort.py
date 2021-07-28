
value = [81, 24 , 4783, 38, -37, 10]
n=len(value)


def merge(arr, s, mid, e):
    n1 = mid - s + 1
    n2 = e- mid
  
    left = [0] * (n1)    
    right = [0] * (n2)
  
    for i in range(0 , n1):
        left[i] = arr[s + i]
  
    for j in range(0 , n2):
        right[j] = arr[mid + 1 + j]
  
    i = 0     
    j = 0     
    k = s     
  
    while i < n1 and j < n2 :
        if left[i] <= right[j]:
            arr[k] = left[i]
            i += 1
        else:
            arr[k] = right[j]
            j += 1
        k += 1

    while i < n1:
        arr[k] = left[i]
        i += 1
        k += 1
  
    while j < n2:
        arr[k] = right[j]
        j += 1
        k += 1


def mergeSort(arr,start,end):

      if start < end:

        mid = (start+(end-1))//2
        mergeSort(arr, start, mid)
        mergeSort(arr, mid+1, end)
        merge(arr, start, mid, end)

mergeSort(value,0,n-1)
print(value)