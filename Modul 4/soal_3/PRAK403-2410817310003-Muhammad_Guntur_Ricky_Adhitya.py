num_1, num_2 = map(int, input().split())

state = 1 if num_1 > num_2 else 0

compare_ii = num_2-1 if state else num_2+1
compare_jj = num_1+1 if state else num_1-1

i = num_1
j = num_2
while True :
    if (num_1 == num_2) or (i < j if state else i > j ) :
        print("%d %d"%(i, j), end="")
        ii = i-1 if state else i+1
        jj = j+1 if state else j-1
        
        while(ii != compare_ii) and (jj != compare_jj):
            print(" - %d %d "%(ii, jj), end="")
            ii = ii-1 if state else ii+1
            jj = jj+1 if state else jj-1
        break
    else:
        print("%d %d - "%(i, j), end="")
        i = i-1 if state else i+1
        j = j+1 if state else j-1
