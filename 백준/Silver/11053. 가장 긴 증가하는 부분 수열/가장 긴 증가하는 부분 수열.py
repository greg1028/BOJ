N = int(input())
A = list(map(int, input().split()))
dp = [1 for _ in range(N)]

for i in range(N):
    for j in range(i):
        if A[j] < A[i]:
            if dp[i] <= dp[j]:
                dp[i] = dp[j] + 1

print(max(dp))