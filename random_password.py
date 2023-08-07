#importing libraries:
import string
import random

#taking password requirements as input:
p = int(input("enter the number of letters in your password: "))
q = int(input("enter the number of numbers in your password: "))
r = int(input("enter the number of symbols in your password: "))

#taking, alphabets, digits and symbols from the library:
lower = string.ascii_lowercase
upper = string.ascii_uppercase
letters = lower + upper
digit = string.digits
symbols = string.punctuation

#adding the randomized characters and shuffling the result:
almost= random.choices(letters,k=p) + random.choices(digit,k=q) + random.choices(symbols,k=r)
random.shuffle(almost)

#printing generated password:
password = "".join(almost)
print("password is: ",password)
