row, col = map(int, input().split())

input_matriks = list(map(int, input().split()))

pointer = 0
for i in range(0, row) :
    for j in range(0, col):
        print(input_matriks[pointer], end=" ")
        pointer += 1
    print()
