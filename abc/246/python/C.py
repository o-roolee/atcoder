n, k, x = map(int, input().split())
list_a = list(map(int, input().split()))

ans = sum(list_a)

m = sum([a // x for a in list_a])
m = min(m, k)
ans -= m * x
k -= m

list_q = [a % x for a in list_a]
list_q = sorted(list_q, reverse=True)

for q in list_q:
    if k == 0:
        break

    ans -= q
    k -= 1


print(ans)
