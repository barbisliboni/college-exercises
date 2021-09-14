# Removing all same elements in an array

values = [38, 38, 25, 27, 38, 25, 26, -12, -3]

while True:
    for i in values:
        if i == 38:
            values.remove(i)
        if values.count(38) == 0:
            break
    print(values)


# Doing it with set() (simpler way)

valuesTwo = [38, 38, 25, 27, 38, 25, 26, -12, -3]
newValues = []

for valueTwo in valuesTwo:
    if valueTwo != 38:
        newValues.append(valueTwo)
print(newValues)


# If something is inside (in)

college = ['Vergueiro', 'Vila Maria', 'Memorial']

print('Vergueiro' in college)
print('Tatuapé' not in college)
print('Tatuapé' in college)


# Slicing arrays
# Caution: the break (last index) isn't inclusive

birds = ['Andorinha', 'Pica-Pau', 'Beija=Flor', 'Canário']

print(birds[1:3]) # from 1 to 3
# Will show on screen Pica-Pau and Beija-Flor
print(birds[0:2]) # from 0 to 2
# Will show on screen Andorinha and Pica-Pau
print(birds[::3])
# Will show on screen Andorinha and Canário, cause it brought the first index and the last one (3)
# Skipping every two ::
# [start:end:number of skips]