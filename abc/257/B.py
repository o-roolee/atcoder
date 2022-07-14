N, K, Q = map(int, input().split())
A = list(map(int, input().split()))
L = list(map(int, input().split()))


for num in L:
    i = num - 1
    if A[i] == N:
        continue
    elif num == len(A):
        A[i] += 1
    elif A[i]+1 == A[i+1]:
        continue
    else:
        A[i] += 1


str_A = map(str, A)
print(" ".join(str_A))
