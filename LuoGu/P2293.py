a = int(input())
b = int(input())
l = 0
r = 1
while r ** a <= b:
    l = r;r = r * 2
while l + 1 < r:
    mid = (l + r) // 2
    if (mid ** a <= b):
        l = mid
    else:
        r = mid
if (l ** a <= b):
    print(l)
else:
    print(r)
