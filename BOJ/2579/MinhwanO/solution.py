stairs = int(input())
stairList = []
for _ in range(stairs):
    stairList.append(int(input()))

dp = [0 for i in range(stairs)]


for i in range(stairs):
    if i == 0:
        dp[0] = stairList[0]
    elif i == 1:
        dp[1] = dp[0] + stairList[1]
    elif i == 2:
        dp[2] = max(stairList[0]+stairList[2],stairList[1]+stairList[2])
    else:
        dp[i] = max(dp[i-3] + stairList[i-1] + stairList[i], dp[i-2] + stairList[i])

print(dp[stairs-1])