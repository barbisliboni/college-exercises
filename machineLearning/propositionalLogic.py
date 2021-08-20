# ((P <-> (~Y)) v (Q -> (R ^ V)))

P = True
Y = True
Q = True
R = True
V = True

propositionOne = ((P == (not(Y))))
propositionTwo = ((R and V) == Q)

print(propositionOne) # False
print(propositionTwo) # True

if(propositionOne or propositionTwo) :
    print("It's true!")
else :
    print("It's false!")
