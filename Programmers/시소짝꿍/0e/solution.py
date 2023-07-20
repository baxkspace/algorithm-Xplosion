def solution(weights):
    answer=0
    weight_dic = {N : weights.count(N) for N in list(set(weights))}
    weight = sorted(weight_dic.items())
    weight_len=len(weight)
    
    for i in weight_dic:
        if weight_dic[i]>1:
            answer+= weight_dic[i]*(weight_dic[i]-1)/2
            
    for i in range(weight_len-1):
        tmp=weight[i][0]
        if float(tmp*2) in weights :
            answer+=weight[i][1]*weight_dic[tmp*2]
        if float(tmp*3/2) in weights :
            answer+=weight[i][1]*weight_dic[tmp*3/2]
        if float(tmp*4/3) in weights :
            answer+=weight[i][1]*weight_dic[tmp*4/3]
            
    return answer