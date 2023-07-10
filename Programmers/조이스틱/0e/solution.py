def solution(name):
    answer = 0
    name_cnt = len(name)
    move = name_cnt - 1
    
    for i in range(name_cnt):
        if name[i]<=chr(78):
            answer += (ord(name[i])-65)
        else:
            answer += (91-ord(name[i]))
            
        next = i + 1
        while next < name_cnt and name[next] == 'A':
            next += 1
            
        if move > 2*i + name_cnt - next:
            move = 2*i + name_cnt - next
            
        if move > 2*(name_cnt - next)+i :
            move = 2*(name_cnt - next)+i 
            
    return answer+move