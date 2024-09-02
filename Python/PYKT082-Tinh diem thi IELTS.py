def check(correct_answers):
    if 39 <= correct_answers <= 40:
        return 9.0
    elif 37 <= correct_answers <= 38:
        return 8.5
    elif 35 <= correct_answers <= 36:
        return 8.0
    elif 33 <= correct_answers <= 34:
        return 7.5
    elif 30 <= correct_answers <= 32:
        return 7.0
    elif 27 <= correct_answers <= 29:
        return 6.5
    elif 23 <= correct_answers <= 26:
        return 6.0
    elif 20 <= correct_answers <= 22:
        return 5.5
    elif 16 <= correct_answers <= 19:
        return 5.0
    elif 13 <= correct_answers <= 15:
        return 4.5
    elif 10 <= correct_answers <= 12:
        return 4.0
    elif 7 <= correct_answers <= 9:
        return 3.5
    elif 5 <= correct_answers <= 6:
        return 3.0
    elif 3 <= correct_answers <= 4:
        return 2.5
    else:
        return 1.0

def Round_score(overall_score):
    if overall_score - int(overall_score) < 0.25:
        return float(int(overall_score))
    elif overall_score - int(overall_score) < 0.75:
        return float(int(overall_score)) + 0.5
    else:
        return float(int(overall_score)) + 1.0

t = int(input())

for i in range(t):
    read, lis, speak, write = input().split()
    read = int(read)
    lis = int(lis)
    speak = float(speak)
    write = float(write)
    a = check(read)
    b = check(lis)
    Total = (a + b + speak + write) / 4
    Total = Round_score(Total)
    print("{:.1f}".format(Total))