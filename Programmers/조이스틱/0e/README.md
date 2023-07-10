## Info
Programmers - 택배 배달과 수거하기 https://school.programmers.co.kr/learn/courses/30/lessons/150369

## How to solve

먼곳부터 계산해야하기때문에 큰수에서 -1해주는 for문 사용
해당 거리(i)에 있는 deli과 pick을 더해줌

deli or pick이 
양수일때 배달하거나 픽업에 나섬
해당 위치로 이동 (answer += 거리) 한번가면 필수로 돌아와야함으로 *2
cap을 빼줌 (굳이 그 거리만큼 안가도 오고가며 주울수있는걸판별하기위해)

## etc