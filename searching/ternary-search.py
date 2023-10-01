def ternarySearch(l, r, key, ar):
    while r >= l:
         
        # Find mid1 and mid2
        mid1 = l + (r-l) // 3
        mid2 = r - (r-l) // 3
 
        # Check if key is at any mid
        if key == ar[mid1]:
            return mid1
        if key == ar[mid2]:
            return mid2
 
        # Since key is not present at mid,
        # Check in which region it is present
        # Then repeat the search operation in that region
        if key < ar[mid1]:
            # key lies between l and mid1
            r = mid1 - 1
        elif key > ar[mid2]:
            # key lies between mid2 and r
            l = mid2 + 1
        else:
            # key lies between mid1 and mid2
            l = mid1 + 1
            r = mid2 - 1
 
    # key not found
    return -1
 
# Driver code
 
# Get the list
# Sort the list if not sorted
ar = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
 
# Starting index
l = 0
 
# end element index
r = 9
 
# Checking for 5
# Key to be searched in the list
key = 5
 
# Search the key using ternary search
p = ternarySearch(l, r, key, ar)
 
# Print the result
print("Index of", key, "is", p)
 
# Checking for 50
# Key to be searched in the list
key = 50
 
# Search the key using ternary search
p = ternarySearch(l, r, key, ar)
 
# Print the result
print("Index of", key, "is", p)