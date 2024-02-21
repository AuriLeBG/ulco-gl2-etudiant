
def fibo_naive(n: int):
    assert n >= 0
    return n if n < 2 else fibo_naive(n-1) + fibo_naive(n-2)

# TODO implement fibo_iterative
def fibo_iterative(n: int):
    assert n >= 0
    if(n == 0):
        return 0
    if(n == 1):
        return 1
    n1 = 0
    n2 = 1
    for i in range(2, n + 1):
        n3 = n1 + n2
        n1 = n2
        n2 = n3
    return n3