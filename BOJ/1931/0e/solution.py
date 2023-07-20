answer =0
tmp = 0
c=[]

N = int(input())
for i in range(N):
    c.append(tuple(map(int, input().split())))
c.sort(key = lambda x : x[0])
c.sort(key=lambda x:x[1])

for start, end in c:
    if start >= tmp :
        answer += 1
        tmp  = end
print(answer)