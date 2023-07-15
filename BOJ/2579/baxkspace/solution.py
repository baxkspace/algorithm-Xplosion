n = int(input())
stairs = []
dp = []
for i in range(n):
    stairs.append(int(input()))
    dp.append(0)

answer = 0
if len(stairs) <= 2:
    answer += sum(stairs)
    print(answer)
else:
    dp[0] = stairs[0]
    dp[1] = stairs[0] + stairs[1]

    for i in range(2, n):
        dp[i] = max(dp[i-2] + stairs[i], dp[i-3] + stairs[i-1] + stairs[i])
    print(dp[-1])