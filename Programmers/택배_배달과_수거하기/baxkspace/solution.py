def solution(cap, n, deliveries, pickups):
    pick = 0
    deliv = cap
    answer = 0

    for i in range(n-1, -1, -1):
        pick += pickups[i]
        deliv -= deliveries[i]

        while pick > 0 or deliv < cap:
            pick -= cap
            deliv += cap
            answer += i+1

    return 2 * answer
