my_list = [4,8,3,7,1,0,9]

element = 7

flag = False
for i in my_list:
    if(i == element):
        flag = True
        break

if(flag==True):
    print("Element found")
else:
    print("Element not found")