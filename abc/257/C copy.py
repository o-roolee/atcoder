N = int(input())
S = list(map(int, list(input())))
W = list(map(int, input().split()))

foo = {}

for i, w in enumerate(W):
    if foo.get(w) is None:
        foo[w] = 0

    if S[i] == 1:
        foo[w] += 1
    else:
        foo[w] -= 1



points = [bar[1] for bar in sorted(foo.items())]

# ans = (N + P) / 2
print(foo)
