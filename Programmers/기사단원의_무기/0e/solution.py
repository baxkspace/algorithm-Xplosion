def solution(number, limit, power):
    answer = 0
    cnt = 0
    
    for i in range(number,0,-1):
        for j in range(1, int(i**(1/2)) + 1):
            if (i % j == 0):
                cnt+=1 
                if ( (j**2) != i) :
                    cnt+=1
        if cnt > limit:
            answer += power
        else:
            answer += cnt
        cnt = 0
        
    return answer