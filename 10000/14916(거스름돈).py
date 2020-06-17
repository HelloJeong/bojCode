def func(k):
    coins = [2, 5]
    value = [0]

    for i in range(1, k+1):
        value.append(987654321)
        for c in coins:
            if i-c >= 0:
                value[i] = min(value[i], value[i-c]+1)
    if value[k] == 987654321:
        return -1
    else:
        return value[k]

print(func(int(input())))
