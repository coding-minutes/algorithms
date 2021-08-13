#!/usr/bin/env python
# coding: utf-8

# In[13]:


def mergeSort(arr):
    if len(arr) > 1:
 
        mid = len(arr)//2
        Left_array = arr[:mid]
        Right_array= arr[mid:]
 
        mergeSort(Left_array)
        mergeSort(Right_array)
        i=j=k=0
        while (i<len(Left_array) and j< len(Right_array)):
            if Left_array[i] < Right_array[j]:
                arr[k] = Left_array[i]
                i += 1
            else:
                arr[k] = Right_array[j]
                j += 1
            k += 1
        while i < len(Left_array):
                arr[k] = Left_array[i]
                i += 1
                k += 1
 
        while j < len(Right_array):
                arr[k] = Right_array[j]
                j += 1
                k += 1


# In[18]:


def list_print(arr):
    for i in range(len(arr)):
        print(arr[i], end=" ")
    print()


# In[19]:


arr=[2,5,17,0,36,24]
print("Unsorted array", end=" ")
list_print(arr)
mergeSort(arr)
print("Sorted array", end=" ")
list_print(arr)


# In[ ]:




