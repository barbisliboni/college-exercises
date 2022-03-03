# Create a list with all prime numbers until 100
# Create an empty list called log_prime_numbers
# Create a loop for each item from the prime numbers list and calculate 
# the item log and add it to the log_prime_numbers list
# Print all items from 10th to 20st from the log_prime_numbers list

import math

prime = []
log_prime_numbers = []

# Descovering the prime numbers
for i in range(2, 100):
    if i > 1:
        for j in range(2, i):
            if(i % j) == 0:
                break
            else:
                prime.append(i)

for item in prime:
    log_prime_numbers.append(math.log(item))

for calculate in range(10, 20):
    print(log_prime_numbers[calculate])

# Dictionary
# Data structures like lists, but aren't ordenated
# It is composed by a pair called key: value 
# While the list delimiter is a [], the dictionaries have {}
# It folllows the same principles as JSON

# Declaring a dictionary
student = {
    'ra': 123456, 
    'name': 'Bárbara LibonI', 
    'degree': 'Analysis and systems development' 
    }

print(student)

# Acessing an element from your "key"
print(student['ra'])
print(student['name'])
print(student['degree'])

# Acessing a value from GET method ('key')
print(student.get('ra'))
print(student.get('name'))
print(student.get('degree'))

studentTwo = {
    'ra': 1234567,
    'name': 'Bárbara Liboni',
    'grades': [9.5, 6.7, 8.0]
}
print(student)

grades = studentTwo.get('grades')
for grade in grades:
    print(grade)

studentThree = {
    'ra': 12345678,
    'name': 'Bárbara Liboni',
    'grades': {
        'AV1': 9.5,
        'AV2': 8.5 
     }
}
print(studentThree)

studentThree.get('grades').get('AV1')

# Traversing a dictionary
# When we think about traversing, there will always be a loop

studentFour = {
    'ra': 123456789,
    'name': 'Bárbara Liboni',
    'grade': 9.5
}

keys = studentFour.keys()

# Getting the value 
for key in keys:
    print(studentFour.get(key))