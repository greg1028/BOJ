import sys
sys.setrecursionlimit(10**6)
from collections import deque

input = sys.stdin.readline
x_dir = [1, -1, 0, 0]
y_dir = [0, 0, 1, -1]
def DFS(i, j):
    cnt = 1
    graph[i][j] = 0
    for d in range(4):
        x = i + x_dir[d]
        y = j + y_dir[d]
        if 0 <= x and x < M and 0 <= y and y < N:
            if graph[x][y] == 1:
                cnt += DFS(x, y)
    return cnt

#def BFS():

T = int(input())
for _ in range(T):
    M, N, K = map(int, input().split())
    graph = [[0 for _ in range(N)]for _ in range(M)]
    for _ in range(K):
        i, j = map(int, input().split())
        graph[i][j] = 1
    num = 0
    for m in range(M):
        for n in range(N):
            if graph[m][n] == 1:
                DFS(m, n)
                num += 1
    print(num)