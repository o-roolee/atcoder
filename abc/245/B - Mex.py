n = int(input())
list_a = list(map(int, input().split()))

for i in range(2001):
    if i in list_a:
        pass
    else:
        print(i)
        break
