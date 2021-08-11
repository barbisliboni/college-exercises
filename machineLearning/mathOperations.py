print("Hello world!")

#The results of the operations with the numbers 7 and 9 are:
print(9 + 7)
print(9 - 7)
print(9 / 7)
print(9 * 7)


#Showing which data type is
name = "Bárbara Liboni"
height = 1.70

print(type(name))
print(type(height))


#Converting types
print(3.1415, int(3.1415))
print(3, float(3))
print(3.1415, str(3.1415))


#Operators
print("Math operators")
print("Attribution operators")
print("Comparison operators")
print("Logical operators")
print("Association operators")
print("Identity operators")

print("\nMath operators:")
hour = 2
minutes = 12

#Division
print(minutes / 60)

#Exponentiation
print(5 ** 2)

#Equation
print((5 + 9) * (15 - 7))
print((5 + 9) / (15 - 7) * (9 + 5))

#Flux control (if else)
if 10 > 5 : 
    print("It's bigger")
else : 
    print("It's smaller")

if 10 < 5 : 
    print("It's bigger")
else : 
    print("It's smaller")

if 10 > 10 : 
    print("It's bigger")
elif 10 == 10 :
    print("They're the same")
else : 
    print("It's smaller")


#Loop

#For
fruits = ["apple", "banana", "pear", "grape"]

for fruit in fruits : 
    print(fruit)

#While (used when we are not sure about the array size)
countdown = 10

while countdown > 0 : 
   print("I'm executing") 
   countdown -= 1

#Defining functions 
def myFunction():
    print("Hello world!")

myFunction() #Calling it 

def sumTwoValues(num1, num2):
    return num1 + num2

sum = sumTwoValues(10, 12)
print(sum)


#Exception handler
try : 
    print(iDontExist)
except: 
    print("An exception occured")