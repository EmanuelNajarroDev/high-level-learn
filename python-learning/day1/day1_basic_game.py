#Libraries random and math for the random number generator
#and the sqrt function
import random
import math

#defines y as a random number between 1 and 10
y = random.randint(1,10)

#asks user for number and defines x
x = input("Guess a number between 1 and 10: ")

#checks to see if the user given number x is the same as y
#tells user if they guessed correctly
if x!= y:
    print("\nNope!")
else:
    print("\nYou got it!")

#function that checks if a number is prime
def isPrime(n):
    
    #returns false in the case of the given number being less than 1
    if n <= 1:
        return False
    #checks if every number from 2 to the sqrt of n + 1 is a multiple of n
    for i in range(2, int(math.sqrt(n)) + 1):
        if n % i == 0:
            return False
    return True

#prints the result
print(isPrime(21))

#prints the fibonacci sequence up to the nth term
def fib_seq(n):

    #in the case of n being less than or equal to zero, an empty list will be returned
    #1 will return a list with just the first term 
    if n <= 0:
        return []
    elif n == 1:
        return [0]
    else:
        #sets fib to be an array with the first two terms of the sequence
        fib = [0, 1]
        #this while loop checks if n if greater than the length of fib
        #while n is greater than fib, next_fib will always equal the sum of the previous two 
        #terms, and then appends it to the fib array
        while len(fib) < n:
            next_fib = fib[-1] + fib[-2]
            fib.append(next_fib)
        return fib
    
#prints the result
print(fib_seq(10))

