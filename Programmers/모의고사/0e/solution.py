def solution(answers):
    answer = []
    student1 = [1,2,3,4,5]
    student2 = [2,1,2,3,2,4,2,5]
    student3 = [3,3,1,1,2,2,4,4,5,5]
    cnt = [0,0,0]
    for i in range(len(answers)):
        if(student1[i % len(student1)]== answers[i]): cnt[0]+=1
        if(student2[i % len(student2)]== answers[i]): cnt[1]+=1
        if(student3[i % len(student3)]== answers[i]): cnt[2]+=1
    
    maxcnt = max(cnt[0],cnt[1],cnt[2])
            
    for i in range(3):
        if(maxcnt == cnt[i]):
            answer.append(i+1)
            
    return answer
