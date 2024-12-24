inp_1, inp_2 = map(int, input().split())

i = 0
sum = 0
while i < inp_1 :
    sum_row = 0 
    j = i+1
    while j >= 1 :
        sum_row += j * inp_2
        print("(%d * %d)%s"%(j, inp_2, " " if j == 1 else " + "), end="")
        j -= 1
    print("= %d"%sum_row)
    sum += sum_row
    i += 1
print("%d"%sum)