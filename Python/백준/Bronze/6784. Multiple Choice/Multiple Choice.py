N = int(input())

student_result = []
answer = []
correct = 0

for _ in range(N):
    temp = input()
    student_result.append(temp)

for _ in range(N):
    temp = input()
    answer.append(temp)


for i in range(N):
    if student_result[i] == answer[i]:
        correct += 1

print(correct)