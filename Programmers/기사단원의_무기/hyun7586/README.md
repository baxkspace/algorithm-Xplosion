
## Info
Programmers - 기사단원의 무기 https://school.programmers.co.kr/learn/courses/30/lessons/136798

## how to solve
1 ~ number 까지 각 숫자의 약수의 개수를 구함 -> power_of_numbers list에 저장
각 약수의 개수를 재조정하는 과정이 필요함(limit를 초과하는가?) -> 마지막 조건문으로 조정

각 숫자의 약수를 구할 때 1부터 해당 숫자까지 순차탐색하며 mod 연산을 하면 시간복잡도 감당 못 함.

### solution
1. n의 약수를 구한다고 할 때, 1부터 sqrt(n)까지만 1차적으로 mod 연산해서 약수 구하기.
2. (1, sqrt(n)) 범위의 약수를 구했으면 해당 약수들로 n을 나눠 몫 구하기 -> 몫들도 n의 약수가 됨.
3. 1, 2번 과정에서 중복 발생도 처리해 줘야 함, 각 숫자의 약수들을 저장해 주는 list는 그때그때 초기화.


## etc