sleep_time = int(input())
alarm_time = int(input())

if sleep_time > 19:
    alarm_time += 24

print(abs(sleep_time - alarm_time))