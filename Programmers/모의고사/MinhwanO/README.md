## Info
Programmers - 모의고사 https://school.programmers.co.kr/learn/courses/30/lessons/42840

## How to solve
* 수포자 1, 2, 3이 각각 찍는 방식을 배열을 세 개 만들어서 각자 집어넣고, for문을 반복하면서 정답이면 count를 하나 더해주었다.
* count1, count2, count3 중 가장 큰 값을 maximum으로 잡고, 그 maximum과 count1 이 같으면 answer에 1을, count2가 같으면 2를, count3이 같으면 3을 집어넣고 마지막에 sort를 통해 정렬했다. 

## etc
* 뭔가 비효율적인 거 같았는데 문제를 보니 완전탐색 카테고리에 들어있어서 안심했다.
