## Info
Programmers - 괄호 변환 https://school.programmers.co.kr/learn/courses/30/lessons/60058

## How to solve
* 크게 세 가지 기능을 하는 함수로 나누어 구현. 
    * `check_correct`: 현재 문자열이 올바른 괄호 문자열인지 판단하는 함수.
    * `div_str`: 문자열을 u와 v 두 가지 문자열로 나누는 함수.
    * `solution`: 재귀 함수로, 해당 문제에서 4번 역할을 하는 함수에 해당.


* __solution 함수 설명__
  * 만일 문자열이 빈 문자열이라면 빈 문자열 return.
  * 문자열을 두 문자열로 나눠 준 후, u 문자열이 올바른 문자열이라면 u + solution(v)를 통해 v 문자열에 재귀 돌려 줌.
  * 올바른 문자열이 아닐 시, 4-1 ~ 4-5에 해당하는 과정 수행.
  
## etc
* 하라는 대로 하면 돼서 사실 크게 어려울 건 없는 문제였다만 간략하게 해결한 코드가 있어서 보고 분석해 봄.
```python
def solution(p):
    if p=='': return p
    r=True
    c=0
    for i in range(len(p)):
        if p[i]=='(': c-=1
        else: c+=1
        if c>0: r=False
        if c==0:
            if r:
                return p[:i+1]+solution(p[i+1:])
            else:
                return '('+solution(p[i+1:])+')'+''.join(list(map(lambda x:'(' if x==')' else ')',p[1:i]) ))

```
* 코드에 사용된 핵심은 크게 두 가지.
  * 균형 잡힌 문자/올바른 문자열 판단을 위한 플래그 사용과 간단한 처리.
  * lambda 함수의 사용 (https://blockdmask.tistory.com/520 참조)
    * 마지막 단계에서 괄호 변환 시 lambda 함수를 사용해 깔끔하게 처리했다. 문자열을 list로 join해 하나씩 읽어 가는 과정에서 반대 괄호로 괄호를 변환시켜 주는 과정.

    
1. p가 빈 문자열일 시 return해 줌.
2. stack을 사용하는 대신 c라는 변수를 사용해 c가 양수일 시 올바른 문자가 아니라고 판단 -> r 플래그를 False로 바꿔 줌
3. c가 0일 시 균형 잡힌 문자열.
   * 이때 r이 True, 즉 올바른 문자열이라면 `p[:i+1] + solution(p[i+1:])`를 돌려 줌. (문제에서 u + 재귀(v)부분을 담당)
   * r이 균형 잡힌 문자열이 아닐 시 4번 동작 수행. '(' + v에 대한 재귀 + ')'에 뒷 문자열을 lambda를 통해 괄호를 뒤집어 문자열에 추가.


* 아!!! 진짜 깔끔하도다. 😥😥