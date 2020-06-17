mem = [0, 1]
n = int(input())

i = 2
while i <= n:
    mem.append(mem[i-1] + mem[i-2])
    i += 1

print(mem[n])
