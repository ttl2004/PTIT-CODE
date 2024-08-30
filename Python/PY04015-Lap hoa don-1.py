def check(total):
    if 0 <= total <= 50:
        final = total * 100
        return round(final + (final * 0.02))
    elif 50 < total <= 100:
        final = 50 * 100 + (total - 50) * 150
        return round(final + (final * 0.03))
    else:
        final = 50 * 100 + 50 * 150 + (total - 100) * 200
        return round(final + (final * 0.05))
    
class Student:
    def __init__(self, id, name, final):
        self.id = id
        self.name = name
        self.final = final

if __name__ == '__main__':
    n = int(input())
    a = []
    for i in range(1, n + 1):
        id = "KH"
        if i < 10:
            id += "0"
        id += str(i)
        name = input()
        SoCu = int(input())
        SoMoi = int(input())
        a.append(Student(id, name, check(SoMoi - SoCu)))

    a = sorted(a, key = lambda x: -x.final)

    for i in a:
        print(i.id, i.name, i.final)

        