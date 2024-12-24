def reverse(Bil):
    reverse_num = 0
    temp = 0
    v = 10
    while v < Bil*10 : 
        reverse_num *= 10
        reverse_num += ((Bil%v)-temp)/(v/10)
        temp = Bil%v
        v *= 10
    return int(reverse_num)

A, B = map(int, input().split())
A = reverse(A)
B = reverse(B)

C = A + B
print(reverse(C))