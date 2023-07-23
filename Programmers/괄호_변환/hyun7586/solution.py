def is_correct_str(s):
    flag=0
    for i in range(len(s)):
        if s[i]=='(':   flag+=1
        elif s[i]==')': flag-=1      
        if flag<0:      return False
    
    return True if flag==0 else False

def find_split(p):
    cnt=0
    for i in range(len(p)):
        cnt+=1 if p[i]=='(' else -1
        if cnt==0:  
            u=p[:i+1]
            v=p[i+1:] if i+1 < len(p) else ""
            return u, v
    
    
def solution(p):
    if p=="":   return ""
    
    answer = ""
    u, v=find_split(p)

    if is_correct_str(u):
        return u+solution(v)
    else:
        answer+='('+solution(v)+')'

        for c in u[1:-1]:
            if c=='(':
                answer+=')'
            else:
                answer+='('
                
    return answer