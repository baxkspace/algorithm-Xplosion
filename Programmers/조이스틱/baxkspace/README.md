## Info
Programmers - 조이 스틱 https://school.programmers.co.kr/learn/courses/30/lessons/42860#

## How to solve
* 아스키 코드 이용해서 상하 이동하는 건 크게 문제가 없으니 설명 패스

### ✔ __커서 이동__
* 처음에 생각했던 경우의 수
  1. 처음부터 끝까지 차례대로 읽으면서 가는 기본 커서 횟수 -> 가장 기본적인 경우이므로 맨 처음에 변수 초기화 시 저장
  2. 연속되는 A 문자열이 나오기 전까지 순회 후 다시 처음으로 돌아가 끝에서부터 도는 경우
  

* __첫 번째 문제점__: AAAABABAAAA와 같이 끝이 A로 끝나는 문자열은 통과하지 않았다.
  * for문을 돌기 전에 while문으로 끝에서부터 A가 몇 개 나오는지를 세서 기본 cursor 횟수에서 제거하는 방식으로 해결했다. 이때 cursor 횟수가 0보다 작아진다면 전부 A라는 것을 의미하므로 0을 리턴해 준다.


* __두 번째 문제점__: 내가 고려하지 않은 한 가지 케이스가 더 있었음.
  * 첫 번째 문제점과 상통하는 부분인데... 저건 끝에서 A 문자열의 경우만 카운트해 주는 경우이나, 끝에서부터 순회해 중간의 A 연속 문자열을 마주하면 처음으로 돌아가는 경우가 있었다.
  * 이걸 해결하고 나니까 자연스럽게 첫 번째 문제점을 해결하기 위한 while문이 필요가 없어짐. 주석 처리.


* 최종적으로 for문을 돌면서 세 가지 경우의 수 중 가장 작은 이동 횟수를 cursor 변수에 대체해 넣어 줬다.

## etc
어렵다... 😨 당연히 첫 번째부터 돌고 마주치면 뒤로 돌아가는 게 빠를 거라고 생각했는데 그게 아니었음.


다른 건 그렇다 치고 이렇게 한 번에 비교하는 방식도 해 보고 싶은데... A 연속 문자열이 여러 개가 나오면 이런 식은 아예 안 되는 건가?
```
def solution(name):
    length = len(name)
    answer = 0
    cursor = length - 1
    A_idx = []

    for i in range(length):
        if name[i] == 'A':
            A_idx.append(i)
    print(A_idx)
    
    for i in range(length):
        answer += min(ord('Z') - ord(name[i]) + 1, ord(name[i]) - ord('A'))
        
    if len(A_idx) != 0:
        answer += min([length - 1, 2*(A_idx[0] - 1) + length - A_idx[-1] - 1, 2*(length - A_idx[-1] + 2) + 1 + A_idx[0] - 1])
    
    answer += cursor
    return answer
```