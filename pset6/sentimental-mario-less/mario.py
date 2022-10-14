from cs50 import get_int

while True:
    # get input from user between 1 to 8
    n = get_int("Height: ")
    if n >= 1 and n <= 8:
        break
    
   # print the digram
for i in range(n):
    for j in range(n):
        if i + j >= n-1:
            print("#", end="")
        else:
            print(" ", end="")

    print()

