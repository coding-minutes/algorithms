my_list ={4,8,3,7,1,0,9}
ele=7

flag =False
for i in my_list:
    if(i==ele):
        flag=True
        break

if(flag==True):
    Print("Element found")
else:
    Print("Element not found")