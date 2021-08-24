#1
x = 8
y = 15

if(x > 3 or y % 2 == 0):
    print("At least one of the conditions were satisfied")
elif(x <= 3 and y % 2 == 1):
    print("None of the conditions were satisfied")

#2

height = float(input('insert your height: '))
weight = float(input('insert your weight: '))

bmiCalculate = weight / (height * height)
bmi = bmiCalculate

if(bmi < 18.5):
    print("Your BMI is " + str(round(bmi, 2)) +  " You're under weight")
elif(bmi >= 18.5 and bmi <= 24.9):
    print("Your BMI is " + str(round(bmi, 2)) +  " Your weight is normal")
elif(bmi >= 25 and bmi <= 29.9):
    print("Your BMI is " + str(round(bmi, 2)) +  " You're over weight")
elif(bmi >= 30 and bmi <= 34.9):
    print("Your BMI is " + str(round(bmi, 2)) +  " You have obesity degree I")
elif(bmi >= 35 and bmi <= 39.9):
    print("Your BMI is " + str(round(bmi, 2)) +  " You have obesity degree II")
else:
    print("Your BMI is " + str(round(bmi, 2)) +  " You have obesity degree III")