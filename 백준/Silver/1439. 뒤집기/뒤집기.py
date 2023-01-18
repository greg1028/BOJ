char = list(map(int, input()))

cnt = 1
for i in range(len(char) - 1):
    if char[i] != char[i+1]:
        cnt += 1

print(cnt//2)