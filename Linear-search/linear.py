my_list = [4,5,6,7]
ele =7
flag =False

for i in my_list:
    if(i==ele):
        flag =True
        break

if(flag==True):
    print("Element found")
else:
    print("Element not found")