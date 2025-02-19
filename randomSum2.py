import random
import matplotlib.pyplot as plt
graphic = []
for k in range(41):
    graphic.append(0)

for k in range(100000):
    number = random.randint(0,20) + random.randint(0, 20)
    graphic[number]+= 1

for k in range(41):
    print(f'[{k}] = {graphic[k]}')

y = graphic
x = list(range(41))

plt.bar(x, y, color='blue', label='Frequency')

# Personalizar o gráfico
plt.title('Distribution of the sum of random numbers')
plt.xlabel('Number')
plt.ylabel('Frequency')
plt.legend()

# Exibir o gráfico
plt.show()