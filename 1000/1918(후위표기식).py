from sys import stdin, stdout
input = stdin.readline
print = stdout.write

priority = {'*': 2, '/': 2, '+': 1, '-': 1, '(': 0}

def solve(s):
    op = []
    for c in s:
        if 'A' <= c <= 'Z':
            print(c)
        elif c == '(':
            op.append(c)
        elif c == ')':
            while op and op[-1] != '(':
                print(op.pop())
            op.pop()
        else:
            while op and priority[c] <= priority[op[-1]]:
                print(op.pop())
            op.append(c)
    while op:
        print(op.pop())
    print('\n')

solve(input().strip())
