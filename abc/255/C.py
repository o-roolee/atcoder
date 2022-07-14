X, A, D, N = map(int, input().split())

Z = A + D * (N-1)

if D < 0:
    D = D * (-1)
    A, Z = Z, A

if X <= A:
    ans = A - X
elif X >= Z:
    ans = X - Z
else:
    mod = (X - A) % D
    ans = min(mod, D - mod)

print(ans)
