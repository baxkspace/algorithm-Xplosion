def solution(s):
    answer = 0
    i=0
    cnt_1=0
    cnt_2=0
    for i in s:
        if(cnt_1==cnt_2):
            cnt_1=0
            cnt_2=0
            answer +=1
            check = i
        if(check==i):
            cnt_1 += 1
        else:
            cnt_2 += 1       
    return answer 