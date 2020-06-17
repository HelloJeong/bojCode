n = input().split(":")

def gcd(a, b):
    if a % b == 0: return b
    return gcd(b, a % b)

g = gcd(int(n[0]), int(n[1]))
a = int(n[0]) // g
b = int(n[1]) // g
print(str(a) + ":" + str(b))
