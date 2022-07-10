N, M, X, T, D = map(int, input().split())
T0 = T - D * min(N, X)

if M >= X:
    print(T)
else:
    print(T0 + D * M)
