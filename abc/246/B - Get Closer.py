a, b = map(int, input().split())

d = (a*a + b*b)**0.5

x = a/d
y = b/d

print(f"{x} {y}")
