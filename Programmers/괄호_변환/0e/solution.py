def check(u):
    s = []
    for i in u:
        if not s:
            s.append(i)
        else:
            if i == ')' and s[-1] == '(':
                s.pop()
            else:
                s.append(i)
    return True if not s else False

def solution(p):
    if p=='':
        return p
    u,v='',''
    for i in range(2,len(p)+1):
        if p[:i].count('(')==p[:i].count(')'):
            u,v=p[:i],p[i:]
            break
    if check(u):
        return u + solution(v)
    else:
        temp = '('+solution(v)+')'
        for x in u[1:-1]:
            if x == '(':
                temp += ')'
            else:
                temp += '('
        return temp