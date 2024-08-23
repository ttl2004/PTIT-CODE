str = input()
idx = 0

while idx < len(str):
    if str[idx] >= 'a' and str[idx] <= 'z':
        print(chr(ord(str[idx]) - 32), end = "")
    else:
        print(str[idx], end = "")
    idx += 1