my_list = [4,8,3,7,1,0,9]

ele = int(input())

flag = False
for i in my_list:
    if(i == ele):
        flag = True
        break

if(flag==True):
    print("Element found")
else:
    print("Element not found")