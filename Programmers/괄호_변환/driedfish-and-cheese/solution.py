def devide(p):
    cnt_l=0
    cnt_r=0
    for i in range(len(p)):
        if p[i] == '(':
            cnt_l+=1
        else:
            cnt_r+=1
        if cnt_l == cnt_r:
            return p[:i+1],p[i+1:] 
        
def check(u):
    s=[]
    for p in u:
        if p == '(':
            s.append(p)
        else:
            if not s:
                return False
            s.pop()
    return True    

        
def solution(p):
    if not p:
        return ""
    u,v=devide(p)
    if check(u):
        return u + solution(v)
    else:
        answer = '(' + solution(v) + ')'
        for p in u[1:len(u)-1]:
            if p == '(':
                answer += ')'
            else:
                answer += '('
        return answer