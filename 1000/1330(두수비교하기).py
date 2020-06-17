def chk(s):
    a, b = map(int, s.split())
    if a < b:
        return "<"
    elif a > b:
        return ">"
    else:
        return "=="


print(chk(input()))
