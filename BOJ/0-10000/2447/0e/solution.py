def solution(n):
    if n == 3:
        return ['***','* *','***']
    
    pastList = solution(n//3)
    curList = []

    for i in pastList:
        curList.append(i* 3)
    for i in pastList:
        curList.append(i+ ' ' * (n//3)+i)
    for i in pastList:
        curList.append(i* 3)
    
    return curList

N = int(input())
for i in solution(N):
    print(i)