import pandas as pd

print("\nSCOA19_Atharav Thombare\n")
data = pd.read_csv("C:\\Users\\atharv\\Desktop\\global_power_plant_database.csv")
data.head()
print(data)
writer = pd.ExcelWriter("C:\\Users\\atharv\\Desktop\\sample_book.csv")
data.to_excel(writer)
writer.save()
print("Dataframeis written successfully")