def operasi(pilihan):
    nilai_pertama = float(input("Masukkan Nilai Pertama : "))
    nilai_kedua = float(input("Masukkan Nilai Kedua : "))
    hasil = float()
    operasi_t = "penjumlahan", "pengurangan", "perkalian", "pembagian"

    match pilihan:
            case 1 :
                hasil = nilai_pertama + nilai_kedua
            case 2 :
                hasil = nilai_pertama - nilai_kedua
            case 3 :
                hasil = nilai_pertama * nilai_kedua
            case 4 : 
                hasil = nilai_pertama / nilai_kedua
    
    print("Hasil %s antara %.2f dengan %.2f adalah %.2f"%(operasi_t[pilihan-1], nilai_pertama, nilai_kedua, hasil))


while True:
    print("Pilih Program\n1.Penjumlahan\n2.Pengurangan\n3.Perkalian\n4.Pembagian\n5.Exit")
    pilihan = int(input("Masukkan Pilihan : "))

    match pilihan:
        case 1 :
            operasi(pilihan)
        case 2 :
            operasi(pilihan)
        case 3 :
            operasi(pilihan)
        case 4 :
            operasi(pilihan)
        case 5 :
            print("Terimakasih, telah menggunakan kalkulator Guntur")
            break
        case _: 
            print("Input anda salah, silahkan coba lagi")