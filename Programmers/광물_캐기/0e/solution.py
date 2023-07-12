def solution(picks, minerals):
    answer=0
    cnt=0
    HP=[]
    tmp=[0,0,0] 
    for i in minerals:
        if cnt//5==picks[0]+picks[1]+picks[2]:
            break
        cnt+=1
        if i=="diamond":
            tmp[0]+=1
            tmp[1]+=5
            tmp[2]+=25
        elif i=="iron":
            tmp[0]+=1
            tmp[1]+=1
            tmp[2]+=5
        else:
            tmp[0]+=1
            tmp[1]+=1
            tmp[2]+=1
        if cnt%5==0 or cnt==len(minerals):
            HP.append(tmp)
            tmp=[0,0,0] 
    HP.sort(key = lambda x:-x[2])
    
    for i in range(len(HP)):
        if picks[0]!=0:
            picks[0]-=1
            answer+=HP[i][0]
        elif picks[1]!=0:
            picks[1]-=1
            answer+=HP[i][1]
        elif picks[2]!=0:
            picks[2]-=1
            answer+=HP[i][2]
            
    return answer