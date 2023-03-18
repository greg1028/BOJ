N = int(input())
A = list(map(int, input().split()))
B, C = map(int, input().split()) #B = 총 감독, C = 부 감독

total = 0

for a in A:
    if a - B <= 0:
        total += 1
    else:
        if (a - B) <= C:
            total += 1
            total += 1
        else:
            if (a - B) % C == 0:
                total += int((a - B) / C)
                total += 1
            else:
                total += 1 + int((a - B) / C)
                total += 1
print(total)