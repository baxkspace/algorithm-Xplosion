def solution(n):
    answer = []
    arr = [[0 for col in range(n)] for row in range(n)]
    num=c=0
    r=-1
    
    for i in range(n):
        for j in range(i,n):
            if i%3==0:r+=1
            if i%3==1:c+=1
            if i%3==2:
                r-=1
                c-=1
            num+=1
            arr[r][c]=num
            
    for i in range(n):
        for j in range(i+1):
            answer.append(arr[i][j])
    return answer