## Info
BOJ 2579 - 계단 오르기 https://www.acmicpc.net/problem/2579

## How to solve
* dp를 이용해서 0번째 dp는 0번 dp는 0번 계단의 값, 1번 dp는 0번 계단 + 1번 계단을 해주었고 2번 dp는 0번 + 2번 과 1번 + 2번 중 더 값이 큰 것으로 선정하였다.
* 이후의 dp들은 dp[i-3] + stairList[i-1] + stairList[i]와 dp[i-2] + stairList[i] 중 값이 더 큰것으로 선정하였고, 마지막 dp를 출력했다.

## etc
* 요건 저번에 해봤어서 파이썬으로 다시 풀어봤다. 반년 됐는데 아직 기억에 남는 거 보니 공부 제대로 했던 것 같군.