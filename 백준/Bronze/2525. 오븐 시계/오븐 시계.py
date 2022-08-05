hour, min = map(int, input().split())
time = int(input())

min += time % 60
if min > 59:
    hour += 1
    min -= 60

hour += time/60
hour = int(hour)
if hour > 23:
    hour -= 24

print(hour, min)