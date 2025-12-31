join_count = int(input())
candidates = []

for i in range(join_count):
    s, c, l = map(int, input().split())
    candidates.append([s, c, l, i + 1])

candidates.sort(key=lambda x: (-x[0], x[1], x[2]))

print(candidates[0][3])