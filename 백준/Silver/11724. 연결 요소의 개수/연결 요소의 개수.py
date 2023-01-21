import sys
input = sys.stdin.readline

N, M = map(int, input().split())
graph = [[i] for i in range(N + 1)]
visited = [0 for _ in range(N + 1)]

for _ in range(M):
    i, j = map(int, input().split())
    graph[i].append(j)
    graph[j].append(i)

def DFS(i):
    stack = [i]
    visited[i] = 1
    while stack:
        x = stack.pop()
        for y in graph[x]:
            if visited[y] == 0:
                visited[y] = 1
                stack.append(y)

cnt = 0
for i in range(1, N+1):
    if visited[i] == 0:
        DFS(i)
        cnt += 1

print(cnt)