def solution(cap, n, deliveries, pickups):
    answer, cur_del, cur_pick=0, 0, 0
    # cur_del, cur_pick : current box which have to be delivered/picked up in truck
    
    for i in range(n):
        cur_del+=deliveries[n-i-1]
        cur_pick+=pickups[n-i-1]
        
        while cur_del > 0 or cur_pick > 0:
            destination=n-i
            #destination : turning point -> distance
            cur_del-=cap
            cur_pick-=cap
            answer+=destination
            
    # need to return dist(2*asnwer)
    return 2*answer