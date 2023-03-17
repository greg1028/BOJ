from copy import deepcopy
N = int(input())

board = []
for i in range(N):
    board.append(list(map(int, input().split())))

def move(graph, dir):
    if dir == 0: #위로 이동
        for j in range(N):
            ptr = 0
            for i in range(1, N):
                if graph[i][j]:
                    tmp = graph[i][j]
                    graph[i][j] = 0

                    #ptr 이 0일 때
                    if graph[ptr][j] == 0:
                        graph[ptr][j] = tmp

                    #ptr 이 tmp 랑 같을 때
                    elif graph[ptr][j] == tmp:
                        graph[ptr][j] *= 2
                        ptr += 1

                    #두 수가 다를 때
                    else:
                        ptr += 1
                        graph[ptr][j] = tmp

    elif dir == 1: #밑으로 이동
        for j in range(N):
            ptr = N - 1
            for i in range(N-2, -1, -1):
                if graph[i][j]:
                    tmp = graph[i][j]
                    graph[i][j] = 0

                    if graph[ptr][j] == 0:
                        graph[ptr][j] = tmp

                    elif graph[ptr][j] == tmp:
                        graph[ptr][j] *= 2
                        ptr -= 1

                    else:
                        ptr -= 1
                        graph[ptr][j] = tmp

    elif dir == 2: #왼쪽으로 이동
        for i in range(N):
            ptr = 0
            for j in range(1, N):
                if graph[i][j]:
                    tmp = graph[i][j]
                    graph[i][j] = 0

                    if graph[i][ptr] == 0:
                        graph[i][ptr] = tmp

                    elif graph[i][ptr] == tmp:
                        graph[i][ptr] *= 2
                        ptr += 1

                    else:
                        ptr += 1
                        graph[i][ptr] = tmp

    else: #오른쪽으로 이동
        for i in range(N):
            ptr = N-1
            for j in range(N-2, -1, -1):
                if graph[i][j]:
                    tmp = graph[i][j]
                    graph[i][j] = 0

                    if graph[i][ptr] == 0:
                        graph[i][ptr] = tmp

                    elif graph[i][ptr] == tmp:
                        graph[i][ptr] *= 2
                        ptr -= 1

                    else:
                        ptr -= 1
                        graph[i][ptr] = tmp
    return graph


def find_max(graph, cnt):
    global ans
    if cnt == 5:
        for i in range(N):
            for j in range(N):
                ans = max(ans, graph[i][j])
        return

    for i in range(4):
        tmp_board = move(deepcopy(graph), i)
        find_max(tmp_board, cnt + 1)

ans = 0
find_max(board, 0)
print(ans)