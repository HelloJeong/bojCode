def chk(s):
    a = int(s)
    if a % 400 == 0 or (a % 4 == 0 and a % 100 != 0):
        return 1
    else:
        return 0


print(chk(input()))
