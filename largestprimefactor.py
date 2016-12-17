def prime_factors(n):
    x = 3
    i = n//x
    while i > 2:
        if n%i == 0 and is_prime(i):
            return i
        print(x)
        x+=2
        i = n//x
    return n
def is_prime(n):
    if n == 0 or n == 1:
        return False
    if n == 2 or n == 3:
        return True
    if n%2 == 0:
        return False
    i = 3
    while i<n:
        if n%i == 0:
            return False
        i+=2
    return True

#print(prime_factors(600851475143))
