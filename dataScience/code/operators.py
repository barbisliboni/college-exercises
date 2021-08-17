# this is a comment
x = 10
y = 8.9

print(type(x))
print(type(y))

university = 'my University'
logo = 'my University is 10/10'
teacher = 'José Eduardo Storopoli'

print(type(logo))
print('Logo characters number:', len(logo))
print('Welcome to ' + university + ', your teacher is ' + teacher)

# Logical variable
mortality = True # must have the first letter upper case 

print(mortality)
print(type(mortality))

# Input (data input)
print('Student data')
name = input('Write your name: ')
age = input('Write your age: ')
print(name, "you are ", age, "years old!")

# Arithmetic operators 

#Sum x + y
#Subtraction x - y
#Multiplication x * y
#Division x / y
#Division disregarding the fractional part x // y
#Rest of division x % y
#Absolute abs(x)
#Convert into int int(x)
#Convert into float float(x)
#Power x ** y

#Round places
import math #importing math lib

print('round: ', round(3.33)) #round up
print('floor: ', math.floor(3.33)) #round to the nearst value
print('ceil: ', math.ceil(1.01))  #round to a higher value

x = 3.123456789

print(round(x, 4))
print(round(x, 3))
print(round(x, 2))
print(round(x, 1))

numberOne = float(input("Insert the first number: "))
numberTwo = float(input("Insert the second number: "))
numberThree = float(input("Insert the third number: "))

print(numberOne ** 3, numberTwo ** 3, numberThree ** 3)

pow(float(input("Write a number: ")), 3) #another way to use power

# Logical operators 
x = 1
y = 3
z = 5
w = 2

print(z > w and w > y)  # False
print(z > w or w > y)   # True
print(not y + w == z)   # False


# \sum{x}{_y}
