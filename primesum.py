import time

def remover(p, i):
    for e in i:
        if e%p != 0:
            yield e
def primesum(n):
    i = iter(range(2, n))
    p = next(i)
    total = 0
    while p*p < n:
        i = remover(p, i)
        total += p
        p = next(i)
    return total + sum(i) + p
t0 = time.clock()
print(primesum(1000000))
t1 = time.clock()
print(t1-t0)
