## Info
BOJ 14501 - 거스름돈 https://www.acmicpc.net/problem/14501

## How to solve
* dp를 이용하여 맨 뒤부터 시작해서 구한다
    * 시간이 주어진 날을 넘으면 안되므로, 넘어간다면 그냥 그 전의 dp값을 복사하고 넘어가지 않는다면 그 전의 dp값과 pay + dp[현재 + 걸리는 날] 을 비교하여 더 큰 것을 집어넣는다.
    * dp[0]는 무조건 0 또는 자기자신.
        * 처음부터 날짜가 벗어난다면 0으로
        * 그게 아니면 자기 자신의 pay

## etc
* 계속 안돼서 머리 아팠는데 dp를 반대로 시작하니까 성공!