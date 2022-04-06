def f(a, b):
    return a*a*a + a*a*b + a*b*b + b*b*b


n = int(input())

x = float('inf')
j = 1000000

for i in range(1000001):
    while(f(i, j) >= n):
        x = min(x, f(i, j))
        j -= 1

print(x)
