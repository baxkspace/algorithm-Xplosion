## Info
BOJ 10826 - 트리의 부모찾기 https://www.acmicpc.net/problem/10826

## How to solve
* DP 이용
* 현재 i번째라면, i-1, i-2번째의 수를 더함
* int로는 범위가 넘어가서 string으로 표현했음. 끝문자들끼리 하나씩 더해서 새로운 문자열에 집어넣고, 마지막에 reverse로 뒤집었음.

## etc
* 문자열 더하기 참고 : https://www.acmicpc.net/problem/10757