l = list(map(int, input().split()))
l = [ d*d for d in l ]
print(sum(l) % 10)
