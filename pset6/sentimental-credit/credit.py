
from cs50 import get_int

# check validation of number
# reject the 0 and negative no.


def main():
    while True:
        credit_card = get_int("Number: ")
        if credit_card >= 0:
            break
        
# define print card brand and validity function

    if check_validity(credit_card):
        print_card_brand(credit_card)

    else:
        print("INVALID")
        
# check validation of card
# and check the sum 


def check_validity(ccn):
    return checksum(ccn)


def checksum(cnn):

    sum = 0
    
# define the cnn and cnn calculation foemula

    for i in range(len(str(cnn))):
        if (i % 2 == 0):
            sum += cnn % 10
        else:
            digit = 2 * (cnn % 10)
            sum += digit // 10 + digit % 10

        cnn //= 10

    return sum % 10 == 0
    
# print the card brand
# formula id predfine


def print_card_brand(cnn):
    if (cnn >= 34e13 and cnn < 35e13) or (cnn >= 37e13 and cnn < 38e13):
        print("AMEX")
    elif cnn >= 51e14 and cnn < 56e14:
        print("MASTERCARD")
    elif (cnn >= 4e12 and cnn < 5e12) or (cnn >= 4e15 and cnn < 5e15):
        print("VISA")
    else:
        print("INVALID")


# main function declartion

if __name__ == "__main__":
    main()
