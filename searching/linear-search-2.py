my_list = [4, 5, 7, 9, 0, 1, 9]

ele = 7
flag = False

for i in my_list:
    if i == ele:
        flag = True
        break

if flag == True:
    print("Element found.")
else:
    print("Element not found.")