a = input().split()
a[0] = int(a[0])
a[1] = int(a[1])
a[2] = int(a[2])
result = a[0] * a[1] - a[2]
if result <= 0:
    print(0)
else:
    print(result)
