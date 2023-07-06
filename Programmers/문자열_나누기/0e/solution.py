def solution(s):
    answer = 0
    x_cnt = 0
    other_cnt = 0
    
    for i in s:
        if  x_cnt == other_cnt:
            token = i
            answer +=1
            
        if token == i:
            x_cnt += 1
        else:
            other_cnt +=1
            
    return answer