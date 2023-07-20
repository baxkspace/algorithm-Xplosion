## Info
BOJ 1931 - 회의실 배정 https://www.acmicpc.net/problem/1931

## How to solve
* 회의가 끝나는 시간 기준으로 정렬한 뒤, 배열의 첫번째 요소부터 시작해서 다음 요소의 시작시간이 현재 요소의 끝나는 시간보다 늦으면 현재 요소를 다음요소로 바꾸고, count에 1을 더한다.

## etc
* 저번에 c로 풀어봤어서 이번에는 python으로 풀어보았다. 파이썬의 정렬은 cmp_to_key를 통해 사용자 설정 comparator를 적용할 수 있다 ! 기억해야지..