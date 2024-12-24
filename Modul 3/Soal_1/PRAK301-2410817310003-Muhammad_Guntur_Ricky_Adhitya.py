inp = input()
input_1, input_2, input_3 = inp.split()

if input_1 > input_2 :
    input_1, input_2 = input_2, input_1

if input_2 > input_3 :
    input_2, input_3 = input_3, input_2

if input_1 > input_2 :
    input_1, input_2 = input_2, input_1

print(input_1, input_2, input_3)