from collections import deque
N, K = map(int, input().split())
graph = [0 for _ in range(200000)]

def isVaild(x):
    if 0 <= x < 200000 and graph[x] == 0:
        return True
    return False

def BFS(N):
    queue = deque()
    queue.append(N)
    while queue:
        x = queue.popleft()

        if x == K:
            print(graph[x])
            break

        if isVaild(x + 1):
            queue.append(x + 1)
            graph[x + 1] = graph[x] + 1

        if isVaild(x - 1):
            queue.append(x - 1)
            graph[x - 1] = graph[x] + 1

        if isVaild(x * 2):
            queue.append(x * 2)
            graph[x * 2] = graph[x] + 1

BFS(N)
