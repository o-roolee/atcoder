Q = int(input())
queue_x = []
queue_c = []

for i in range(Q):
    query = list(map(int, input().split()))

    if (query[0] == 1):
        x, c = query[1], query[2]
        queue_x.append(x)
        queue_c.append(c)

    if (query[0] == 2):
        ans = 0
        c = query[1]

        while (c > 0):
            tmp_c = min(c, queue_c[0])
            ans += queue_x[0] * tmp_c
            c -= tmp_c
            queue_c[0] -= tmp_c
            if (queue_c[0] <= 0):
                queue_c.pop(0)
                queue_x.pop(0)

        print(ans)
