
A, B, C, D, E, F, X = map(int, input().split())

takahashi = []

for _ in range(A):
    takahashi.append(B)

for _ in range(C):
    takahashi.append(0)


aoki = []

for _ in range(D):
    aoki.append(E)

for _ in range(F):
    aoki.append(0)

t_l = 0
a_l = 0

for i in rang
e(X):
    t_l += takahashi[i & len(takahashi)]
    a_l += aoki[i & len(aoki)]

