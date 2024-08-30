class SinhVien:
    def __init__(self, name, ac, submit):
        self.name = name   
        self.ac = ac
        self.submit = submit
    

if  __name__ == '__main__':
    n = int(input())
    a = []
    for i in range(n):
        name  = input()
        ac, submit = map(int, input().split())
        a.append(SinhVien(name, ac, submit))
    
    a = sorted(a, key = lambda x: (-x.ac, x.submit, x.name))
    for i in a:
        print(i.name, i.ac, i.submit)