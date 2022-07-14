import math


N, X = map(int, input().split())
A = []
B = []

for i in range(N):
    a, b = map(int, input().split())
    A.append(a)
    B.append(b)

ans = math.inf

for i in range(N):
    time = sum(A[:i+1]) + sum(B[:i+1])
    rest = X - (i+1)

    if rest < 0:
        break

    time += rest * B[i]
    ans = min(ans, time)

print(ans)
