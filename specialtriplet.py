for c in range(1, 1000):
    for b in range(1, 500):
        for a in range(1, 500):
            if c ** 2 == a**2 + b**2 and a + b + c == 1000 and c > a and c >b:
                print(a, b, c, a*b*c)
                break
