n1, n2 = map(int, input().split())
if n1 != n2:
    exit()

n1_inp = list(map(int, input().split()))
n2_inp = list(map(int, input().split()))

for i in range(0, n1):
    print((n1_inp[i]*n2_inp[i]), end=" ")