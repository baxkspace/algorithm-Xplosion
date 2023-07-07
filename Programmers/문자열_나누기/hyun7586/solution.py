def solution(s):
    answer = 0
    is_x=is_not_x=0

    for char in s:
        if is_x==is_not_x==0:
            x=char
            
        if char==x:
            is_x+=1
        else:
            is_not_x+=1
        
        if is_x==is_not_x:
            answer+=1
            is_x=is_not_x=0
    
    if is_x!=0 or is_not_x!=0:
        answer+=1
        
    return answer