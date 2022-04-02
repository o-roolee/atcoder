def resolve(n, k, x, list_a):
    used_coupon = 0
    list_mod = []

    for ai in list_a:
        q, mod = divmod(ai, x)
        if mod != 0:
            list_mod.append(mod)

        used_coupon += q

        if used_coupon >= k:
            ans = sum(list_a) - (k * x)
            return ans

    for _ in range(k - used_coupon):
        i = list_mod.index(max(list_mod))
        del list_mod[i]
        if len(list_mod) == 0:
            break

    ans = sum(list_mod)

    return ans

n, k, x = map(int, input().split())
list_a = list(map(int, input().split()))


ans = resolve(n, k, x, list_a)
print(ans)
