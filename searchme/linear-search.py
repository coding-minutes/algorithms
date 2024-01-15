my_list = [4,5,6,8,7,1]

ele = 7

flag = False
for i in my_list:
    if(1==ele):
        flag = True
        break
if(flag == True):
    print("Element found")
else:
    print("Element not found")
