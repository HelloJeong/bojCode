n = int(input())
i = 1
while i <= n:
    l = list(input().lower())
    tmp = l.copy()
    tmp.reverse()
    if l == tmp: print("Yes")
    else : print("No")
    i += 1
