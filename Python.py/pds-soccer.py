import numpy as np

playerdetails = [1.7, 78.4, 1.8, 70.5,2.1, 84.5, 1.7, 75.2]

soccer = np.array(playerdetails)

np_soccer = soccer.reshape(4,2)

print (np_soccer)

# Print out the shape of np_soccer
print(np_soccer.shape)

#Printing the average of Heights
avg = np.mean(np_soccer[:,0])
print("Average: " + str(avg))

# Print median height. 
med = np.median(np_soccer[:,0])
print("Median: " + str(med))

# Print out the standard deviation on height.
stddev = np.std(np_soccer[:,0])
print("Standard Deviation: " + str(stddev))

#Calculating BMI
np_height = np_soccer[:,0]
np_weight = np_soccer[:,1]

bmi = np_weight/np_height**2
print (bmi)

arr_overweight = bmi[bmi>25]
print ("Overweight players")
print (arr_overweight)

arr_normal = bmi[bmi<=25]

print ("players whose bmi is normal ")
print (arr_normal)