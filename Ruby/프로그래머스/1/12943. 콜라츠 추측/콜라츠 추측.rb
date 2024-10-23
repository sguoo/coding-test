def solution(num, steps = 0) steps += 1 while num != 1 && steps < 500 && (num.even? ? num /= 2 : num = num * 3 + 1); num == 1 ? steps : -1 end
