## info
Programmers - 문자열 나누기 https://school.programmers.co.kr/learn/courses/30/lessons/140108

## how to solve

### 문제 조건 해석
1. 첫 문자를 x로 잡음. x와 같은 문자, x와 다른 문자 따로 개수 count할 변수 필요함.
2. is_x==is_not_x 이면 문자열 분리함 -> 분리한 문자열의 개수를 answer로 count함.
    (근데 실제로 문자열을 분리할 필요는 없음. 그냥 순회하면서 answer만 ++ 해 주면 됨.)


### 풀이
1. 문자 x의 개수를 세는 is_x, 문자 x와 다른 문자의 개수를 세는 is_not_x를 각각 0으로 초기화
2. for문으로 string을 하나씩 순회하며 is_x==is_not_x 일 때 answer++
3. 문자열의 길이가 홀수일 때, 마지막 문자를 읽었을 때 문제가 생길 수 있음. 마지막 문자를 읽고 나서도, is_x!=is_not_x이면 추가적으로 answer++ 해 줌 (두 번째 test case 참고)


## etc