TestCase = int(input())
answer=[]
for i in range(TestCase):
    people = int(input())
    MBTI = list(input().split(' '))
    if people > 32:
        answer.append(0)
    else:
        minCnt=100
        for j in range(people):
            for r in range(people):
                for z in range(people):
                    cnt=0
                    if j == r or r == z or z == j:
                        continue
                    for k in range(4):
                        if MBTI[j][k] != MBTI[r][k]: cnt += 1
                        if MBTI[r][k] != MBTI[z][k]: cnt += 1
                        if MBTI[j][k] != MBTI[z][k]: cnt += 1
                    minCnt= min(minCnt,cnt)
                    if minCnt==0:break
                if minCnt==0:break
            if minCnt==0:break
        answer.append(minCnt)

for i in range(TestCase):
    print(answer[i])