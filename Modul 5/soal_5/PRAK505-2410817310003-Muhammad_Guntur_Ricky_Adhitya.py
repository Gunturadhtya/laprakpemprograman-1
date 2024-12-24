def Biodata(tahunLahir, nama, asal):
    tahun_sekarang = 2020
    print("Perkenalkan Nama Saya : %s"%(nama))
    print("Umur Saya : %d"%(tahun_sekarang-tahunLahir))
    print("Saya Adalah Angkatan : 2020")
    print("Asal Saya dari : %s"%(asal))

tahunLahir = int(input())
nama = input()
asal = input()
Biodata(tahunLahir, nama, asal)