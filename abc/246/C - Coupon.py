def resolve(n, k, x, list_a):
    left_coupon = k
    mod_counts = [0] * x

    for ai in list_a:
        q, mod = divmod(ai, x)
        left_coupon -= q

        if left_coupon <= 0:
            ans = sum(list_a) - (k * x)
            return ans
        else:
            mod_counts[mod] += 1


    for i in reversed(range(x)):
        if left_coupon >= mod_counts[i]:
            left_coupon -= mod_counts[i]
            mod_counts[i] = 0
        else:
            mod_counts[i] -= left_coupon
            left_coupon = 0

        if left_coupon == 0:
            break


    ans = sum([i*c for i, c in enumerate(mod_counts)])

    return ans

n, k, x = map(int, input().split())
list_a = list(map(int, input().split()))


ans = resolve(n, k, x, list_a)
print(ans)
