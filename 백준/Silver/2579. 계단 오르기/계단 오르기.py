N = int(input())
stair = [int(input()) for _ in range(N)]

sum = 0
if N <= 2:
    for i in range(N):
        sum += stair[i]
    print(sum)

else:
    dp = []
    dp.append(stair[0])
    dp.append(stair[0] + stair[1])
    dp.append(max(stair[2] + stair[0], stair[2] + stair[1]))

    for i in range(3, N):
        dp.append(max(dp[i-2] + stair[i], dp[i-3] + stair[i-1] + stair[i]))
    print(dp[N-1])