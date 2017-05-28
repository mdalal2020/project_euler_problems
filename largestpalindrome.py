largest_palindrome = 0
for i in range(100, 1000):
    for j in range(100, 1000):
        prod = i*j
        if is_palindrome(prod) and prod > largest_palindrome:
            largest_palindrome = prod
print(largest_palindrome)

def is_palindrome(n):
    num = []
    while n > 0:
        num += n % 10
        n = n // 10
    
