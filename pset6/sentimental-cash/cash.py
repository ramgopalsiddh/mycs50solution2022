from cs50 import get_float

# chek valid input
while True:
    dollars = get_float("Change owed:")
    if dollars >= 0:
        break

# define one dollar& intilize the no. of coin
cents = round(dollars * 100)
coins = 0

# count the 25cents coins
while cents >= 25:
    cents -= 25
    coins += 1

# count the 10cents coins
while cents >= 10:
    cents -= 10
    coins += 1

# count the 5cents coins
while cents >= 5:
    cents -= 5
    coins += 1

# count the 1cent coins
while cents >= 1:
    cents -= 1
    coins += 1

# print the total no. of coins
print(coins)