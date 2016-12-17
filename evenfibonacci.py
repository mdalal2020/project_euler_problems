def even_fibonacci(n):
    i = 1
    pred, curr = 0, 1
    sum = 0
    while(curr < 4000000):
        pred, curr = curr, pred + curr
        if curr % 2 == 0:
            sum+=curr
        i+=1
    return sum
print(even_fibonacci(100000))
