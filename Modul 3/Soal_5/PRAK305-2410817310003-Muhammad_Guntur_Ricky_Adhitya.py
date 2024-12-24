input_detik = int(input())

hari = int(input_detik/86400)
jam = (input_detik/3600)-(hari*24)
menit = (input_detik%3600)/60
detik = input_detik%60

if input_detik >= 86400 :
    print("%d hari %.2d:%.2d:%.2d"%(hari, jam, menit, detik))
else :
    print("%.2d:%.2d:%.2d"%(jam, menit, detik))