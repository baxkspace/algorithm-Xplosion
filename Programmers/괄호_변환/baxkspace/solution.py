def check_correct(p):
    stack = []
    for item in p:
        if item == '(':
            stack.append(item)
        else:
            if not stack:
                return False
            stack.pop()
    return True if not stack else False

def div_str(p):
    left = right = 0
    for i in range(len(p)):
        if p[i] == '(':
            left += 1
        else:
            right += 1
        if left == right:
            return p[:i+1], p[i+1:]
    
def solution(p):
    if p == '':
        return ''
    u, v = div_str(p)
        
    if check_correct(u):
        return u + solution(v)
    else:
        answer = '(' + solution(v) + ')'
        for item in u[1:len(u)-1]:
            if item == '(':
                answer += ')'
            else:
                answer += '('
    return answer