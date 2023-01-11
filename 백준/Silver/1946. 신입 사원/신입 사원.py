import sys
input = sys.stdin.readline
T = int(input())
for _ in range(T): #T번 반복
    cnt = 1
    n = int(input())
    grade = [0 for _ in range(n+1)]
    
    for _ in range(1, n+1):
        a, b = map(int, input().split())
        grade[a] = b
    
    Min = grade[1]
    
    for i in range(2, n+1):
        if grade[i] < Min:
            Min = grade[i]
            cnt += 1
    print(cnt)