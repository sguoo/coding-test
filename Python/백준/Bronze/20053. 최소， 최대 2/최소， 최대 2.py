T = int(input())


result = []

for _ in range(T):
    min = 1000001
    max = -1000001
    N = int(input())
    temp = list(map(int, input().split()))
    for i in range(N):
        if min > temp[i]:
            min = temp[i]
        if max < temp[i]:
            max = temp[i]
    result.append(min)
    result.append(max)

for i in range(len(result)):
    print(result.pop(0), end=" ")
    if i % 2 == 1:
        print("\n", end="")

