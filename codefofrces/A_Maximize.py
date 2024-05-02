from math import gcd

def find_y(x):
    # If x is prime, y is 1
    if is_prime(x):
        return 1
    else:
        # Find prime factors
        factors = prime_factors(x)
        # Subtract the smallest factor from x
        return x - min(factors)

def is_prime(n):
    if n < 2:
        return False
    if n == 2:
        return True
    if n % 2 == 0:
        return False
    sqrt_n = int(n ** 0.5) + 1
    for i in range(3, sqrt_n, 2):
        if n % i == 0:
            return False
    return True

def prime_factors(n):
    factors = []
    if n < 2:
        return factors
    for i in range(2, n + 1):
        if n % i == 0:
            factors.append(i)
            while n % i == 0:
                n //= i
    return factors

# Input number of test cases
t = int(input())
for _ in range(t):
    x = int(input())
    print(find_y(x))
