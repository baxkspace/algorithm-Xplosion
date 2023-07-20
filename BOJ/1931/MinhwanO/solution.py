from functools import cmp_to_key

n = int(input())

def cmp_key(a, b):
    if a[1] < b[1]:
        return -1
    elif a[1] == b[1]:
        if a[0] < b[0]:
            return -1
        else:
            return 1
    else:
        return 1

li = [list(map(int, input().split())) for _ in range(n)]
li.sort(key = cmp_to_key(cmp_key))

prev = li[0][1]
count = 1

for i in range(1, n):
    if li[i][0] >= prev:
        prev = li[i][1]
        count = count + 1

print(count)