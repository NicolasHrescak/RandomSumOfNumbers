import random
import matplotlib.pyplot as plt

##Generalization of the sum of random numbers

minValue = int(input("Enter the minimum value: "))
maxValue = int(input("Enter the maximum value: "))
numberOfSums = int(input("Enter the number of sums: "))
numberOfTests = int(input("Enter the number of tests: "))
array = (maxValue - minValue) + 1 ##Because the first and the last value enter in the array
graphic = [0] * (((maxValue * numberOfSums) ) + 1)
value = 0

for k in range((numberOfTests)):
    for i in range(numberOfSums):
        value += random.randint(minValue, maxValue)

    graphic[value] += 1
    value = 0

baseOfGraphic = list(range( ((maxValue * numberOfSums) + 1) ))
x = [baseOfGraphic[i] if (minValue * numberOfSums) <= i <= (maxValue * numberOfSums) else 0 for i in range(len(baseOfGraphic)) ]
y = graphic

plt.bar(x, y, color = 'blue', label = 'Frequency')

plt.title('Distribution of the sum of random numbers')
plt.xlabel('Number')
plt.ylabel('Frequency')
plt.legend()
plt.show()