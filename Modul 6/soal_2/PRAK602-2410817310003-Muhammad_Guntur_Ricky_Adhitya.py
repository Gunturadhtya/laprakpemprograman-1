jumlah_ruangan = int(input())

jumlah_zetsu = list(map(int, input().split()))

for i in range(0, len(jumlah_zetsu)):
    print(jumlah_zetsu[i]*(i+1), end=" ")