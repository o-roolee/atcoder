ans = "Yes"

N = int(input())
list_sei = []
list_mei = []

for _ in range(N):
    sei, mei = input().split()
    list_sei.append(sei)
    list_mei.append(mei)

for _ in range(N):
    sei = list_sei.pop(0)
    mei = list_mei.pop(0)

    if (sei in list_sei or sei in list_mei) and \
       (mei in list_sei or mei in list_mei):
        ans = "No"
        break

    list_sei.append(sei)
    list_mei.append(mei)

print(ans)
