
import pandas as pd 
import numpy as np
#
df=pd.DataFrame(np.random.randn(5,3),index=['a', 'c', 'e', 'f', 'h'], columns=['One','Two','Three'])
df = df.reindex(['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h']) 
print("SCOA19_Atharav Thombare")
print(df)
# To check missing value is available or not
print (df.isnull())

# replace missing values using different method
#1.Replace NaN with a Scalar Value

print ("NaN replaced with '0':")
print(df.fillna(0))

#2.Replace NaN with Fill NA Backward -bfill/backfill
print(df.fillna(method='bfill'))

#3.Replace NaN with Fill NA Forward -pad/fill
print(df.fillna(method='pad'))

#3.Replace NaN if index having all NaN with drop
c=df.dropna()
print(c)






import numpy as np
import matplotlib.pyplot as plt
import pandas as pd
dataset = pd.read_csv("C:\\Users\\atharv\\Downloads\\GOOG.csv")
X = dataset.iloc[:, [2, 3]].values
y = dataset.iloc[:, 4].values
# from sklearn.model_selection import train_test_split

# x_train, x_test, y-train, y_test = train_test_split(x,y, test_size = 0.25, random_state = 0)

# print(x_train)
# print(x_test)
# print(y_train)
# print(y_test)