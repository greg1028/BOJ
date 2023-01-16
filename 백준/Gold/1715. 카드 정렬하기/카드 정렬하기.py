import heapq
N = int(input())
cards = []
res = 0

for i in range(N):
    heapq.heappush(cards, int(input()))

for _ in range(N-1):
    merge = heapq.heappop(cards) + heapq.heappop(cards)
    res += merge
    heapq.heappush(cards, merge)
print(res)