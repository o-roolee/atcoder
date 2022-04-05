a, b, c, d = map(int, input().split())

takahashi = a * 60 + b
aoki = c * 60 + d

if takahashi <= aoki:
    print("Takahashi")
else:
    print("Aoki")
