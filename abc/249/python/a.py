A, B, C, D, E, F, X = map(int, input().split())

def foo(a, b, c, x):
    r, mod = divmod(x, a+c)
    ret = b * (r*a + min(a, mod))
    return ret


tak = foo(A, B, C, X)
aok = foo(D, E, F, X)

if tak > aok:
    print("Takahashi")
elif tak == aok:
    print("Draw")
else:
    print("Aoki")
