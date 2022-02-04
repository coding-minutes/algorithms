from ast import If


my_list = [4, 8, 6, 7, 2, 3, 1]

ele = 7

flag = False
for i in my_list:
    if(i == ele):
        flag = True
        break
    if(flag == True):
        print("Element Found")
    else:
        print("Element not found")
