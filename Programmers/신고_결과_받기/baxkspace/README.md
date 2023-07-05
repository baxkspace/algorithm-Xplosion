## Info
Programmers - 기사단원의 무기 https://school.programmers.co.kr/learn/courses/30/lessons/136798

## How to solve
1부터 num까지 ( 1, 2, 3 ...~ num-1, num)의 약수개수를 하나하나 구함 :
항상 짝이 되는 수가 존재함 ex: 8 [1,2,4,8], 1*8, 2*4
예외처리: (ex: 25 [1,5,25] 1*25, 5*5) 하나의 수를 제곱했을때는 짝이 존재X

약수개수(cnt)가 limit를 초과하면 power값으로, 아니라면 약수개수값을 answer에 더함

## etc