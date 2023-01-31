import random
print('Welcome to Password Generator')

chars = 'abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ@_^<>/*#~!$0123456789'
number = input('\n Amount of password you want to generate:')
number = int(number)

length = input('Your password length:')
length = int(length)

print('\nhere is your passwords:')

for pwd in range(number):
    passwords=''
    for c in range(length):
        passwords += random.choice(chars)
    print(passwords)
    