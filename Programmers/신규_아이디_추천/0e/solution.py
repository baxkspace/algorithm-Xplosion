def solution(new_id):
    answer = ''
    new_id = new_id.lower()
    
    for i in new_id:
        if i.isalpha() or i.isdigit() or i=='_' or i=='-' or i=='.': answer+=(i)
    
    while True:
        if '..' in answer:
            answer = answer.replace('..', '.')
        else:
            answer = answer[1:] if answer[0] == '.' and len(answer) > 1 else answer
            answer = answer[:-1] if answer[-1] == '.' else answer
            break
            
    if answer == '' : answer='a'
    
    if len(answer)>15:
        if answer[14]=='.':answer=answer[:14]
        else :answer=answer[:15]
    
    while len(answer)<3:
        answer+=answer[-1]
    
    return answer