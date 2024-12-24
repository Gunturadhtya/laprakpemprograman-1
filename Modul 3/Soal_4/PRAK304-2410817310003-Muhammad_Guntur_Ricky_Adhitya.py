angka = int(input())

if angka == 0 :
    print("Nol")
elif angka > 99 :
    print("Anda Menginput Melebihi Limit Bilangan")
elif angka == 10 or angka >= 20 :
    print("Puluhan")
elif angka > 10 :
    print("Belasan")
elif angka > 0 :
    print("Satuan")