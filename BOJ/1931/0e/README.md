## Info
BOJ 1931 - 회의실 배정 https://www.acmicpc.net/problem/1931

## How to solve

c.sort(key = lambda x : x[0]):시작시간을오름차순으로
c.sort(key=lambda x:x[1]):끝나는시간을오름차순으로
(여담으로이걸한번에할수잇는코드를알고싶다........난몰라서일단sort를두번해줌)

끝나는시간과 시작시간을 비교해서
끝나는시간이 시작시간보다 크거나 같을때만 answer++

## etc
의외로빨리풀어버렷달까
아마백준예시가끝나는시간이오름차순이라파악하기쉬웠던것같음...