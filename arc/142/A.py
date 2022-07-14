def reverse(num):
    reverse = 0
    while num > 0:
        num, mod = divmod(num, 10)
        reverse = reverse * 10 + mod

    return reverse


def f(K):
    r_K = reverse(K)
    rr_K = reverse(r_K)

    return min(r_K, rr_K)


def count(K):
    if K != f(K):
        return 0

    ans = 0

    r_K = reverse(K)
    if K != r_K:
        while r_K <= N:
            ans += 1
            r_K *= 10

    while K <= N:
        ans += 1
        K *= 10

    return ans


N, K = map(int, input().split())

ans = count(K)
print(ans)
