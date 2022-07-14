nums = list(map(int, input().split()))
m = max(nums)

if sum(nums) >= 2 * m:
    ans = max(nums)
else:
    ans = -1

print(ans)
