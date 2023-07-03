my_list = [9,4,1,5,7,8,9]

ele = 7

flag = false 

for i in my_list:
    if (i == ele):
        flag = True 
        break

if (flag == True) :
    print("Element found")    
else:
    print("Element not found")     