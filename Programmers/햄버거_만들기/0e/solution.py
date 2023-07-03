def solution(ingredient):
    answer = 0
    arr = []
    cnt = 0
    hamburger = [1,2,3,1]
    
    for i in ingredient:
        arr.append(i)
        if(len(arr)>3):
            for j in range(4):
                if arr[-4+j] == hamburger[j]:
                    cnt += 1
            if cnt == 4:
                answer+=1
                for j in range(4):
                    arr.pop()
            cnt = 0
                
    return answer