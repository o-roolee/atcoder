def parse(str):
    chars = []
    counts = []
    for i, s in enumerate(str):
        if i == 0:
            chars.append(s)
            counts.append(1)
            continue

        if s == chars[-1]:
            counts[-1] += 1
        else:
            chars.append(s)
            counts.append(1)

    ret = {
        "chars": chars,
        "counts": counts,
    }

    return ret


def foo(parsed_S, parsed_T):
    chars_S = parsed_S["chars"]
    counts_S = parsed_S["counts"]

    chars_T = parsed_T["chars"]
    counts_T = parsed_T["counts"]

    if chars_S != chars_T:
        return "No"

    for i, cnt_S in enumerate(counts_S):
        cnt_T = counts_T[i]

        if cnt_S == 1:
            if cnt_T != 1:
                return "No"
        elif cnt_S > cnt_T:
            return "No"

    return "Yes"


val_S = input()
val_T = input()

parsed_S = parse(val_S)
parsed_T = parse(val_T)
ans = foo(parsed_S, parsed_T)
print(ans)
