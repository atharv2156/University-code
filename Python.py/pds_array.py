
import numpy as np

arr1 = np.array([[1,2,3], [4,5,6]])
arr2 = np.array([[4,6,8] , [2,2,2]])

if arr1.shape !=arr2.shape:
    print ("Error: Given arrays are not same size")
else:
    print ("Exponentialoff 2nd on 1st array is:  \n" , arr1**arr2)
    
import numpy as np
arr1= np.array([[1,2,3], [4,5,6]])
arr2 = np.array([[4,6,8] , [2,2,2]])

if arr1.shape !=arr2.shape:
    print ("Error: Given arrays are not same size")
else:
    print ("Exponentialoff 2nd on 1st array is using the built in function: \n" ,  np.power(arr1,arr2))