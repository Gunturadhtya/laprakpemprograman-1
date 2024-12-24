def hitung(v1, v2):
    return abs(v1 - v2)

def mutlak(bil):
    return abs(bil)

a, c, b, d = map(int, input().split())

Hasil = hitung(a, b) + hitung(c, d)
print(mutlak(Hasil))