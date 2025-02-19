import random
import matplotlib.pyplot as plt
graphic = []
for k in range(21):
    graphic.append(0)

for k in range(110000):
    number = random.randint(0,20)
    graphic[number]+= 1

for k in range(21):
    print(f'[{k}] = {graphic[k]}')

y = graphic
x = list(range(21))

plt.bar(x, y, color='blue', label='Frequency')

sum = 0
for k in range(21):
    sum += graphic[k]

mean = sum/21

plt.axhline(mean, color='red', linestyle='--', label=f'Mean: {mean:.2f}')

plt.title('Distribution of the sum of random numbers')
plt.xlabel('Number')
plt.ylabel('Frequency')
plt.legend()
plt.show()
