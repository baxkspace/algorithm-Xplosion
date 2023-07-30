## Info
Programmers - 둘만의 암호 https://school.programmers.co.kr/learn/courses/30/lessons/155652

## How to solve
* 반복문으로 s를 돌면서 index만큼 다 더해준다. 이 때, skip에 들어가있는 문자인지 확인하기 위해서 skip.find()함수를 이용한다
* 만약 find했을 때 있다면 for문에서 초기화한 변수를 -1 해주어서 +1과 상쇄되어 제자리에 있도록 만든다.
* 문자가 z를 넘어갈 경우, 그 값에서 122를 뺀 만큼을 더해준다. 이 때, 더하는 수를 0으로 초기화하고 그 위치의 문자를 바꾼 문자로 설정해둔다.

## etc
* 이거 지금 생각해보니까 안 빼고 나머지연산으로 하면 간단하게 할 수 있을듯?