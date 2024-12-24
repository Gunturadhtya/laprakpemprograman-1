inp = input()

multiplication_of, symbol  = inp.split()

for i in range(1, 50):
    if i%int(multiplication_of) == 0:
        print(symbol, end=" ")
    else :
        print(i, end=" ")