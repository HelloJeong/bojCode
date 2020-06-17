dp = {0: 0, 1: 1}


def fibo(n):
    if n <= 1:
        return dp[n]
    if n not in dp:
        dp[n] = fibo(n-1) + fibo(n-2)
    return dp[n]


print(fibo(int(input())))
