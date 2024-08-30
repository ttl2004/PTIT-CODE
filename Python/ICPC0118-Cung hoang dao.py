def check(day, month):
    if (month == 3 and day >= 21) or (month == 4 and day <= 19):
        return "Bach Duong"
    elif (month == 4 and day >= 20) or (month == 5 and day <= 20):
        return "Kim Nguu"
    elif (month == 5 and day >= 21) or (month == 6 and day <= 20):
        return "Song Tu"
    elif (month == 6 and day >= 21) or (month == 7 and day <= 22):
        return "Cu Giai"
    elif (month == 7 and day >= 23) or (month == 8 and day <= 22):
        return "Su Tu"
    elif (month == 8 and day >= 23) or (month == 9 and day <= 22):
        return "Xu Nu"
    elif (month == 9 and day >= 23) or (month == 10 and day <= 22):
        return "Thien Binh"
    elif (month == 10 and day >= 23) or (month == 11 and day <= 22):
        return "Thien Yet"
    elif (month == 11 and day >= 23) or (month == 12 and day <= 21):
        return "Nhan Ma"
    elif (month == 12 and day >= 22) or (month == 1 and day <= 19):
        return "Ma Ket"
    elif (month == 1 and day >= 20) or (month == 2 and day <= 18):
        return "Bao Binh"
    elif (month == 2 and day >= 19) or (month == 3 and day <= 20):
        return "Song Ngu"
t = int(input())
results = []
for _ in range(t):
    d, m = map(int, input().split())
    results.append(check(d, m))
for result in results:
    print(result)
