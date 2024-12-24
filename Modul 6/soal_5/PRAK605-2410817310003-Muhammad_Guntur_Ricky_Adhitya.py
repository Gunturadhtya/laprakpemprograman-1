def matriks(ordo):
    matriks_temp = list()
    for i in range(0, ordo) :
        vektor_i = list(map(int, input().split()))
        matriks_temp.append(vektor_i)
    return matriks_temp

def transpose(ordo, matriks):
    matriks_temp = list()
    for i in range(0, ordo):
        vektor_i = list()
        for j in range(0, ordo):
            vektor_i.append(matriks[j][i])
        matriks_temp.append(vektor_i)
    return matriks_temp

def kali_vektor(vektor_a, vektor_b, ordo):
    hasil = 0
    for i in range(0, ordo):
        hasil += vektor_a[i] * vektor_b[i]
    return hasil

def print_matriks(matriks):
    for baris in matriks :
        for elemen in baris:
            print(elemen, end=" ")
        print()

ordo = int(input())

print("Matriks A")
matriks_a = matriks(ordo)

print("Matriks B")
matriks_b = matriks(ordo)

matriks_b = transpose(ordo, matriks_b)

hasil = []

print("Matriks AXB")
for i in range(0, ordo):
    vektor_i = []
    for j in range(0, ordo):
        operasi = kali_vektor(matriks_a[i], matriks_b[j], ordo)
        vektor_i.append(operasi)
    hasil.append(vektor_i)

print_matriks(hasil)
