str = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"

N, X = map(int, input().split())
q, mod = divmod(X, N)

if mod == 0:
    ans = str[q-1]
else:
    ans = str[q]

print(ans)
