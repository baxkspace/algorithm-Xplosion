## Info
Programmers - 괄호 변환 https://school.programmers.co.kr/learn/courses/30/lessons/60058

## How to solve
* 괄호 분리
    * count1, count2 변수로 각각 '(', ')'의 개수를 세고, 두 개수가 같아졌을 때 거기까지의 문자열을 u에다가 집어넣고 나머지는 v에다가 집어넣는다
* 올바른 괄호 문자열 판별
    * '(' 를 저장하는 스택을 만들어서 '('가 나타날 때마다 집어넣고, ')'가 나오면 pop한다.
    * 스택이 비어있는데 ')'가 나오면 올바르지 않다고 판별한다.
    * 반복문이 정상적으로 끝났지만 스택이 비어있지 않으면 올바르지 않다고 판별한다.
    * 모두 괜찮으면 올바르다고 판별한다.
* 나머지는 그냥 문제 설명에 있는대로 진행한다.

## etc
* 첨에는 문제가 뭐라카는지 이해를 못했는데 보다보니까 아하 하고 깨달아서 진행했다. 근데 자꾸 signal:aborted(core dump) 이게 떠서 뭐지싶었는데 string을 지울 때 str.erase()가 str.erase(시작지점, 개수) 또는 iterator로 str.erase(특정 위치) 이런식으로 해야하는데 iterator 쓰지도 않고 그냥 위치 하나만 띡 집어넣었던 것이 문제였다. 이제 기억해야겠군..