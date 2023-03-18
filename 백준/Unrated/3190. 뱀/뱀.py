N = int(input())
K = int(input())

board = [[0 for _ in range(N + 2)]for _ in range(N + 2)] #보드
dir_x = [1, 0, -1, 0] # 0 우, 1 하, 2 좌, 3 상
dir_y = [0, 1, 0, -1] # 0 우, 1 하, 2 좌, 3 상
dir_info = [] #방향정보 L 왼쪽 D 오른쪽
snake = [(1, 1)]  # snake[0] == 꼬리, snake[-1] == 머리

for _ in range(K):
    i, j = map(int, input().split())
    board[i][j] = 1

L = int(input())
for _ in range(L):
    dir_info.append(input())

# 게임 몇 초에 끝나는지 구하기

def play(board):
    dir = 0 #처음에는 오른쪽
    cnt = 0

    while True:
        i, j = snake[-1]  # 머리 index
        if i < 1 or i > N or j < 1 or j > N:  # out of range
            break

        elif (i, j) in snake[:-1]: #몸통에 머리가 닿는 경우
            break

        if board[i][j] == 0 and cnt > 0: #사과가 없으면 꼬리 이동
            snake.pop(0)

        else:
            board[i][j] = 0 #사과 먹음

        # 방향계산
        if dir_info:
            time, lr = dir_info[0].split()
            time = int(time)

        if time == cnt:
            dir_info.pop(0)

            if lr == 'L':
                dir -= 1
                if dir < 0:
                    dir = 3

            else:
                dir += 1
                if dir > 3:
                    dir = 0

        i += dir_y[dir]
        j += dir_x[dir]

        snake.append((i, j))  # 새 머리 위치
        cnt += 1

    return cnt

print(play(board))