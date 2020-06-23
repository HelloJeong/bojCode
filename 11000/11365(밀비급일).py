while True:
    tmp = ""
    str = input()
    if str == "END": break
    str = list(str)
    str.reverse()
    for s in str:
        tmp += s
    print(tmp)

