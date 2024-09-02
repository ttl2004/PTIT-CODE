class ThongTin:
    def __init__(self, id_team, team, school):
        self.id_team = id_team
        self.team = team
        self.school = school

class ThongTin2:
    def __init__(self,id,  id_team, name, team, school):
        self.id = id
        self.id_team = id_team
        self.name = name
        self.team = team
        self.school = school

mp = {}   
t1 = int(input())
ans = []
for i in range(1, t1 + 1):
    team = input()
    school = input()
    id_team = "Team"
    if i < 10:
        id_team += "0"
    id_team += str(i)
    ans.append(ThongTin(id_team, team, school))
    if id_team not in mp:
        mp[id_team] = ans[-1]
t2 = int(input())
ans2 = []
for idx in range(1, t2 + 1):
    name = input()
    id_team = input()
    id = "C"
    if idx < 10:
        id += "00"
    elif idx < 100:
        id += "0"
    id += str(idx)
    ans2.append(ThongTin2(id, id_team, name, mp[id_team].team, mp[id_team].school))

ans2.sort(key = lambda x : x.name)
for i in ans2:
    print(i.id, i.name, i.team, i.school)
