n = int(input())
tile = [0, 1, 2]
while len(tile) <= n:
    tile.append((tile[len(tile) - 1] + tile[len(tile) - 2]) % 10007)
print(tile[n])