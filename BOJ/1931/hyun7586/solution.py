import sys
lst=[]
cnt=0
n=int(sys.stdin.readline())

for _ in range(n):
    u, v=map(int, sys.stdin.readline().split())
    lst.append((u, v))

lst.sort(key=lambda x: x[0])
lst.sort(key=lambda x: x[1])

start=0
for i in range(n):
    if start<=lst[i][0]:
        start=lst[i][1]
        cnt+=1


print(cnt)
