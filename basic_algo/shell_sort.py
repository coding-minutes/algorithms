# creating an empty list
mylist = []

# number of elements as input
n = int(input("Please enter number of elements you want to give for sorting: "))

# iterating till the range
for i in range(0, n):
    mylist.append(int(input())) # adding the element

def shellsort(mylist):
  len_list = len(mylist)
  gap = len_list // 2
  while gap > 0:
    a = gap
    while a < len_list:
      temp = mylist[a]
      b = a - gap
      while b >= 0 and mylist[b] >= temp:
        mylist[b+gap] = mylist[b]
        b = b - gap
      mylist[b + gap] = temp
      a = a + 1
    gap = gap // 2

shellsort(mylist)
print(mylist)