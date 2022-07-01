import re

S = input()
uniq = ''.join(set(S))

ans = "Yes"

if len(S) != len(uniq):
    ans = "No"

if re.findall(r"[A-Z]", S) == []:
    ans = "No"


if re.findall(r"[a-z]", S) == []:
    ans = "No"

print(ans)
