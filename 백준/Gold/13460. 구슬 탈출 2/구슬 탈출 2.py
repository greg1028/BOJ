N, M = map(int, input().split())
visited = [ [[[False for _ in range(M)]for _ in range(N)]for _ in range(M)] for _ in range(N)]

board = [[]for _ in range(N)]
dx = [-1, 1, 0, 0]
dy = [0, 0, -1, 1]

for i in range(N):
    board[i] = list(input())

for i in range(N):
    for j in range(M):
        if board[i][j] == "R":
            rx = j
            ry = i
        elif board[i][j] == "B":
            bx = j
            by = i

visited[ry][rx][by][bx] = True

def move(y, x, dy, dx):
    distance = 0
    while board[y + dy][x + dx] != '#' and board[y][x] != "O":
        y += dy
        x += dx
        distance += 1
    return y, x, distance

def BFS(ry, rx, by, bx):
    cnt = 1
    queue = []
    queue.append((ry, rx, by, bx, cnt))

    while queue:
        ry, rx, by, bx, cnt = queue.pop(0)

        if cnt > 10:
            return -1

        for i in range(4):
            nry, nrx, disr = move(ry, rx, dy[i], dx[i])
            nby, nbx, disb = move(by, bx, dy[i], dx[i])

            if board[nby][nbx] != "O": #실패가 아니고
                if board[nry][nrx] == "O": #성공이라면
                    return cnt

                if nry == nby and nrx == nbx: #겹친경우
                    if disr > disb:
                        nry = nry - dy[i]
                        nrx = nrx - dx[i]
                    else:
                        nby = nby - dy[i]
                        nbx = nbx - dx[i]

                if visited[nry][nrx][nby][nbx] == False:
                    visited[nry][nrx][nby][nbx] = True
                    queue.append((nry, nrx, nby, nbx, cnt + 1))
    return -1

print(BFS(ry, rx, by, bx))