def maksimal(a, b):
    return max(a, int(b))

def minimal(a, b):
    return min(a, int(b))

batas = 0
maks = -100000
minim = 100000
bilangan = int(input())

i = 0
nilai = input().split() 
while i < bilangan:
    maks = maksimal(maks, nilai[i])
    minim = minimal(minim, nilai[i])
    i += 1

print("%d %d"%(maks, minim))