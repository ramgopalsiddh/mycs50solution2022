from cs50 import get_int

while True:
    # get input from user between 1 to 8
    n = get_int("Height: ")
    if n >= 1 and n <= 8:
        break

  # print the digram
for i in range(n):
    print(" " * (n - 1 - i), end="")
    print("#" * (i + 1), end="")
    print(" " * 2, end="")
    print("#" * (i + 1), end="")
    print(end="\n")