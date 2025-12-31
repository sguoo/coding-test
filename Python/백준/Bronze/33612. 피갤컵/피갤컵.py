pigel_cup = int(input())
first_date = [2024, 8]

for i in range(pigel_cup - 1):
    first_date[1] += 7
    if(first_date[1] > 12):
        first_date[1] -= 12
        first_date[0] += 1

print(first_date[0], first_date[1])