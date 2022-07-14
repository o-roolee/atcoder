import bisect


def solution(A, B, X, N):
    ans = 0
    i = bisect.bisect_left(A, X)

    ans = X*i - B[i] + (B[N]-B[i]) - X*(N-i)

    return ans


N, Q = map(int, input().split())
A = list(map(int, input().split()))
A.sort()

B = [0] * (N+1)

for i in range(N):
    B[i+1] = B[i] + A[i]

for _ in range(Q):
    X = int(input())
    ans = solution(A, B, X, N)
    print(ans)
