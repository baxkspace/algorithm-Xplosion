## Info
Programmers 로또의 최고 순위와 최저 순위 - https://school.programmers.co.kr/learn/courses/30/lessons/77484

## How to solve
* 로또 돌면서 정답지에 있는지 find로 확인, 있으면 winCount++
* 0이 있으면 zeroCount++
* 삼항연산자를 이용해서 7 - winCount - zeroCount, 7 - winCount 집어넣기

## etc
* cpp find함수 기억해야겠다.