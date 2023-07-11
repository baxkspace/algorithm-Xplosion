## Info
Programmers - 택배 배달과 수거하기 https://school.programmers.co.kr/learn/courses/30/lessons/150369

## How to solve
1. deliveries[i]나 pickups[i]이 존재하는 가장 먼 거리의 지점을 turning point로 설정함.
2. 처음에는 cur_del, cur_pick 모두 0, 0으로 초기화시킨 상태에서 시작
3. 각 지점에서 cur_del, cur_pick에 deliveries, pickups를 더해줌
    for i in range(n)로 시작했으니까 n-i-1가 index가 됨.
4. 해당 turning point가 destination임. 그 지점까지 왕복해야 하므로 마지막 return 구문에서 2 곱해줌.


## etc
처음에는 python으로 50줄이 넘는 실패작 스파게티 코드를 만들어놓음. 더이상 디버깅하지 어렵다 판단하고 최서영과 신다연의 readme, 그리고 구글링을 통해 영감을 얻어 만들어낸 코드임. 