def chk():
    l = [ 0 for _ in range(9) ]
    l[0] = int(input())
    max = 0
    for i in range(1, 9):
        l[i] = int(input())
        if l[max] < l[i]:
            max = i

    print(l[max])
    print(max+1)


chk()
