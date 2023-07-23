def solution(answers):
    n=len(answers)
    lst1, lst2, lst3=[], [], []
    
    for i in range(n//5+1):
        for j in [1, 2, 3, 4, 5]:
            lst1.append(j)
    
    for i in range(n//8+1):
        for j in [2, 1, 2, 3, 2, 4, 2, 5]:
            lst2.append(j)
            
    for i in range(n//10+1):
        for j in [3, 3, 1, 1, 2, 2, 4, 4, 5, 5]:
            lst3.append(j)
    
    for k in range(n):
        if answers[k]==lst1[k]:
            lst1[-1]+=1
        if answers[k]==lst2[k]:
            lst2[-1]+=1
        if answers[k]==lst3[k]:
            lst3[-1]+=1
    
    max_score=max(lst1[-1], lst2[-1], lst3[-1])
    temp=[]
    if lst1[-1]==max_score:
        temp.append(1)
    if lst2[-1]==max_score:
        temp.append(2)
    if lst3[-1]==max_score:
        temp.append(3)
    
        
    return temp