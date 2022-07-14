def solution(N, K, A):
    if K <= N/2:
        return "Yes"

    left = A[:N-K]
    center = A[N-K:K]
    right = A[K:]

    sorted_lr = sorted(left+right)
    sorted_left = sorted_lr[:N-K]
    sorted_right = sorted_lr[N-K:]
    sorted_A = sorted(A)

    if sorted_left + center + sorted_right == sorted_A:
        return "Yes"

    return "No"



N, K = map(int, input().split())
A = list(map(int, input().split()))

ans = solution(N, K, A)
print(ans)
