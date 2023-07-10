def solution(cap, n, deliveries, pickups):
    answer = 0
    deli,pick= 0,0
    
    for i in range(n-1,-1,-1):
        deli += deliveries[i]
        pick += pickups[i]

        while deli > 0 or pick > 0:
            deli -= cap
            pick -= cap
            answer += (i+1) * 2
            
    return answer