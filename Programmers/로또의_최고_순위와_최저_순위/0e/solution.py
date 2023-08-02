def solution(lottos, win_nums):
    answer = []
    zeroCnt=winCnt=0
    for i in lottos:
        if i in win_nums: winCnt+=1
        if i==0: zeroCnt+=1
        
    for i in range(1,7):
        if winCnt+zeroCnt==abs(7-i):
            answer.append(i)
            break
        if i==6: answer.append(i)
        
    for i in range(1,7):
        if winCnt==abs(7-i):
            answer.append(i)
            break
        if i==6: answer.append(i)
    
    return answer