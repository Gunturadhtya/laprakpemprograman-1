def kode_shikamaru(bahasa, kode):
    if(len(bahasa) != len(kode)):
        print("Panjang kalimat berbeda, pesan palsu")
        exit()

    pagar = 0
    bintang = 0
    for i in range(0, len(bahasa)):
        if (bahasa[i] == kode[i]) and bahasa[i] == " ":
            print(end=" ")
        elif (bahasa[i] == kode[i]):
            print("*", end="")
            bintang += 1
        else:
            print("#", end="")
            pagar += 1  

    print("\n* = ", bintang)
    print("# = ", pagar)

    if(bintang >= pagar):
        print("Pesan Asli")
    else:
        print("Pesan Palsu")

bahasa = input()
kode = input()
kode_shikamaru(bahasa, kode)
