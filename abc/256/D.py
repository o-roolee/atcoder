N = int(input())

intervals = []
min_val = 200000
max_val = 1

for _ in range(N):
    interval = list(map(int, input().split()))
    intervals.append(interval)
    min_val = min(min_val, interval[0])
    max_val = max(max_val, interval[1])

partitions = [0] * (max_val+1)

for interval in intervals:
    partitions[interval[0]] += 1
    partitions[interval[1]] -= 1

unpaired = 0
ans_l = 0
ans_r = 0

for i, val in enumerate(partitions):
    if val == 0:
        continue

    if unpaired == 0 and val > 0:
        ans_l = i

    unpaired += val

    if unpaired == 0 and val < 0:
        ans_r = i
        print(f"{ans_l} {ans_r}")
