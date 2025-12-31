M, N = map(int, input().split())

result = 0

for _ in range(M):
    j = input()
    if  len(j) / 2 < j.count("O"): 
        result += 1

print(result)