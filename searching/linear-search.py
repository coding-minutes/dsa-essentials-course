print("Enter the number of elements in list")
num_list=int(input())
list=[]

for i in range(1,(num_list+1)):
    if i==1:
        place="st"
    elif i==2:
        place="nd"
    elif i==3:
        place="rd"
    else:
        place="th"
    print("Enter the ", i, place ," number" )
    num=int(input())
    list.append(num)

mylist= list

print("Enter the number to search in the list")
ele=int(input())

flag=False

for i in mylist:
    if i==ele:
        flag=True


if flag==True:
    print("Element Found")