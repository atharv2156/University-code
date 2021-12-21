def list1 (a) : 
    return(list1)

a = ['department','pincode',412207,123.34,'name',10,11.11]

b = input("enter the string : ")

if b in a : 
    print("the string is in the list1 in the position : ",a.index(b)+1)
else:
        print("String is not in the list1")
        b = (a)+[b]
        print("the search string is added to the list1: \n",b)