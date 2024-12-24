import math
alas =  5
tinggi = 12
sisi_a = tinggi
sisi_c = alas
sisi_b = math.sqrt((sisi_a**2)+(sisi_c**2))
keliling = sisi_a+sisi_b+sisi_c
luas = 0.5*alas*tinggi
print("Diketahui :\nAlas = %d cm\nTinggi = %d cm\n\nJawab :\nSisi A = %d cm\nSisi B = %0.f cm\nSisi C = %d cm\nKeliling = %d cm\nLuas = %d cm"%(alas, tinggi, sisi_a, sisi_b, sisi_c, keliling, luas))