N = int(input())
IN = 0
OUT = 0

if N < 10000:
    for i in range(0, N, 1):
        X = int(input())
        if -10 ** 7 < X < 10 ** 7:
            if 10 < N < 20:
                IN += 1
            else:
                OUT += 1
print(f'{IN} in\n{OUT} out')