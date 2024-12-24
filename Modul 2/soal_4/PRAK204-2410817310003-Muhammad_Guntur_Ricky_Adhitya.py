banyak_variable = 2
inputs = []

while len(inputs) < banyak_variable:
    line = input()

    new_line = line.split()

    for value in new_line:
        inputs.append(float(value))

jariJari, tinggi = inputs
volume = 22/7 * (jariJari**2) * tinggi
luas = 2*22/7*jariJari*(jariJari+tinggi)
keliling = 2*22/7*jariJari

print("Volume = %.2lf\nLuas = %.2lf\nKeliling = %.2lf"%(volume,luas,keliling))