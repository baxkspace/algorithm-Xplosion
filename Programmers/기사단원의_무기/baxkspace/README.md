## Info
Programmers - 기사단원의 무기 https://school.programmers.co.kr/learn/courses/30/lessons/136798

## How to solve
구해진 약수의 개수를 answer에 하나씩 넣는 방식으로 진행. 약수를 구할 시 해당 수가 제곱수인 경우를 제외하면 모든 약수에는 짝이 존재함.

math.sqrt 이용해 루트(해당 값)까지 포문을 돌려 제곱수일 시 예외 처리. 또한 구하면서 약수의 개수가 limit를 넘어간다면 break를 걸고 power을 더해 준다.

## etc
약수 구할 때 루트값까지만 돌려야 되는 걸 까먹고 자꾸 끝까지 돌려서 시간이 5000ms가 나옴!!!!!! 제발기억해