banyak_variable = 6
inputs = []

while len(inputs) < banyak_variable:
    line = input()

    new_line = line.split()

    for value in new_line:
        inputs.append(float(value))

a, b, i, j, x, y = inputs
print("%.3f"%((((a - b) * i) / j) - (x + y)))
