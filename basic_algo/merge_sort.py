
value = [81, 24 , 4783, 38, -37, 10]
n=len(value)

def merge(arr, s, m, e):
    n1 = m - s + 1
    n2 = e- m
  
    L = [0] * (n1)
    R = [0] * (n2)
  
    for i in range(0 , n1):
        L[i] = arr[s + i]
  
    for j in range(0 , n2):
        R[j] = arr[m + 1 + j]
  
    i = 0     
    j = 0     
    k = s     
  
    while i < n1 and j < n2 :
        if L[i] <= R[j]:
            arr[k] = L[i]
            i += 1
        else:
            arr[k] = R[j]
            j += 1
        k += 1

    while i < n1:
        arr[k] = L[i]
        i += 1
        k += 1
  
    while j < n2:
        arr[k] = R[j]
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