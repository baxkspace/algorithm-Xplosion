def solution(id_list, report, k):
    answer=[]
    report = list(set(report))
    reported = {user : 0 for user in id_list}
    userNum = len(id_list)
    
    for i in range(userNum):
        answer.append(0)
    
    for i in report:
        id_tmp = i.split(' ')
        reported[id_tmp[1]]+=1
    
    for i in report:
        id_tmp = i.split(' ')
        if reported[id_tmp[1]] >=k:
            for j in range(userNum):
                if id_list[j] == id_tmp[0]:
                    answer[j]+=1
                    break
            
    return answer