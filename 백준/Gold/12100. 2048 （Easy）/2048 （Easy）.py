from copy import deepcopy
N = int(input())
board = []
for i in range(N):
    board.append(list(map(int, input().split())))

def find_max(board, cnt): #최대 숫자 탐색
    global ans
    if cnt == 5:
        for i in range(N):
            for j in range(N):
                ans = max(ans, board[i][j])
        return

    for dir in range(4): #상 하 좌 우 이동
        find_max(move(deepcopy(board), dir), cnt + 1) #deep copy안하면 보드 원본이 바뀜

def move(board, dir): #상 하 좌 우 이동한 보드를 return 해주는 함수
    if dir == 0: #상
        for j in range(N):
            ptr = 0
            for i in range(1, N): #1부터 모든 블럭 검사
                if board[i][j]: #보드에 성분이 있을 때
                    tmp = board[i][j]
                    board[i][j] = 0
                    if board[ptr][j] == 0: #ptr이 0이면
                        board[ptr][j] = tmp
                    elif board[ptr][j] == tmp: #ptr이 검사하는 블럭과 같으면
                        board[ptr][j] *= 2
                        ptr += 1
                    else: #ptr이 다르면
                        ptr += 1 #ptr 하나 올려주고
                        board[ptr][j] = tmp #그 위치에 값을 옮겨줌

    elif dir == 1: #하
        for j in range(N):
            ptr = N-1
            for i in range(N-2, -1, -1): #N-2 부터 모든 블럭 검사
                if board[i][j]: #보드에 성분이 있을 때
                    tmp = board[i][j]
                    board[i][j] = 0
                    if board[ptr][j] == 0: #ptr이 0이면
                        board[ptr][j] = tmp
                    elif board[ptr][j] == tmp: #ptr이 검사하는 블럭과 같으면
                        board[ptr][j] *= 2
                        ptr -= 1
                    else: #ptr이 다르면
                        ptr -= 1 #ptr 하나 내려주고
                        board[ptr][j] = tmp #그 위치에 값을 옮겨줌

    elif dir == 2: #좌
        for i in range(N): #0 행부터 N-1 행까지 하나씩 검사
            ptr = 0
            for j in range(1, N): #1 열부터 N-1 열까지 검사
                if board[i][j]: #보드에 성분이 있을 때
                    tmp = board[i][j]
                    board[i][j] = 0
                    if board[i][ptr] == 0: #ptr이 0이면
                        board[i][ptr] = tmp
                    elif board[i][ptr] == tmp: #ptr이 검사하는 블럭과 같으면
                        board[i][ptr] *= 2
                        ptr += 1
                    else: #ptr이 다르면
                        ptr += 1 #ptr 하나 올려주고
                        board[i][ptr] = tmp #그 위치에 값을 옮겨줌

    else: #우
        for i in range(N):  # 0 행부터 N-1 행까지 하나씩 검사
            ptr = N-1
            for j in range(N-2, -1, -1):  #N-2 열 부터 0 열 까지 검사
                if board[i][j]:  # 보드에 성분이 있을 때 성분 저장 후 해당 블럭 0으로 변경
                    tmp = board[i][j]
                    board[i][j] = 0
                    if board[i][ptr] == 0:  # ptr이 0이면
                        board[i][ptr] = tmp
                    elif board[i][ptr] == tmp:  # ptr이 검사하는 블럭과 같으면
                        board[i][ptr] *= 2
                        ptr -= 1
                    else:  # ptr이 다르면
                        ptr -= 1  # ptr 하나 내려주고
                        board[i][ptr] = tmp  # 그 위치에 값을 옮겨줌
    return board

ans = 0
find_max(board, 0)
print(ans)