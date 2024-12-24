ROW = 43
COLLUMN = 8

nama = "Muhammad Guntur Ricky Adhitya"
nim = "2410817310003"

row = ROW
collumn = COLLUMN

i = 0
while i < collumn :
        j = 0
        while j < row : 
            if i == 0 or i+1 == collumn :
                print("#", end="")
            elif j == 0 or j+1 == row :
                print("#", end="")
            else:
                if i == (int((collumn/2))-1) and j == (int((row-len(nama))/2)):
                    print(nama, end="")
                    row = row - len(nama)
                if i == (int((collumn/2))) and j == (int((row-len(nim))/2)):
                    print(nim, end="")
                    row = row - len(nim)
                print(" ", end="")
            j += 1
            
        row = ROW
        print("\n", end="")
        i += 1