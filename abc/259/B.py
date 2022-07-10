import math

val_a, val_b, val_d = map(int, input().split())

rad = math.radians(val_d)
val_x = val_a * math.cos(rad) - val_b * math.sin(rad)
val_y = val_a * math.sin(rad) + val_b * math.cos(rad)

print(val_x, val_y)
