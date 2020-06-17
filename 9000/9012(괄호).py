def chk():
    str = input()
    stack = []
    if len(str) % 2 == 1 or str[0] == ")" or str[-1] == "(":
        print("NO")
        return

    for i in range(len(str)):
        if str[i] == "(": # i번째 글자가 여는 괄호라면 스택에 push
            stack.append("(")
        else: # i번째 글자가 닫는 괄호일 경우
            if len(stack) == 0: # 스택이 비어있다면 닫는 괄호와 짝이 없으므로 No
                print("NO")
                return
            else: # 비어있지 않다는 것은 여는 괄호가 스택에 저장되어 있으니 pop
                stack.pop()

    if len(stack) == 0: # 반복문이 종료된 후에 스택이 비어있다면 모든 괄호의 쌍이 맞은 것
        print("YES")
    else: # 그렇지 않다면 괄호 쌍이 안 맞은 것
        print("NO")


t = int(input())
for _ in range(t):
    chk()
