# assignmet 2
# SCOA19-atharav thombare
import math
print("SCOA19_Atharav thombare\n")
print("____________________________________")
radius = float(input("Enter the radius: "))
area = 3.14*radius**2
circumference = 2*3.14*radius
print("area of circle: ", area)
print("____________________________________")
# Part B
print("|_______________________________________________|\n")
print("Assignment No 2 Part B-Area of Triangle \n")
print("\____________________________________________/")
side1 = float(input("Enter length of side 1: "))
side2 = float(input("Enter length of side 2: "))
side3 = float(input("Enter length of side 3: "))

s = (side1 + side2 + side3)/2
area = math.sqrt(s*(s - side1)*(s - side2)*(s - side3))

print("Area of triangle is ", area)

print("\_____________________________________/")
