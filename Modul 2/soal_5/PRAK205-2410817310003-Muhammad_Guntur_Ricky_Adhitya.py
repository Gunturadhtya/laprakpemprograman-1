import math

banyak_variable = 2
inputs = []

while len(inputs) < banyak_variable:
    line = input()

    new_line = line.split()

    for value in new_line:
        inputs.append(float(value))

sisi_a, sisi_b = inputs
pythagoras = (sisi_b**2)-(sisi_a**2)
sisi_c = math.sqrt(pythagoras)
keliling = sisi_a+sisi_c+sisi_b
tinggi = sisi_a
alas = sisi_c
luas = 0.5*alas*tinggi

print("Alas = %d cm\nTinggi = %d cm\nKeliling = %d cm\nLuas = %d cm^2\n"%(alas, tinggi, keliling, luas))
