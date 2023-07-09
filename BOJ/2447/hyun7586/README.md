## info
백준 별찍기(2447) : https://www.acmicpc.net/problem/2447
백준 Z(1074) : https://www.acmicpc.net/problem/1074

## how to solve

### 2447_별찍기
미리 만들어놓은 2차원 list에 별을 채워넣는 방식임.

divide and conquer 전략처럼 n=3일 때는 바로 채우고(conquer), n>3이면 n//3을 argument로 갖는 재귀함수를 호출함.(divide)

### 1074_Z
1. 2차원 list 만들어놓고 재귀 이용해서 숫자 채우기. 
-> 최대 2^16*2^16 크기의 배열을 완성해야 함. 메모리도 많이 필요하고 재귀하면서 시간이 너무 오래 걸림.

2. divide and conquer 방식을 이용하지만 while문 사용하기. 입력받은 행, 열의 값에 따라 전체 사각형을 4등분하면서 계속 분리하기.
-> while문 사용할 때면 break 거는 탈출조건을 걸면 안 됨. 시간초과 걸림. while 조건문을 정확하게 거는 게 나은 듯.

3. recursive func 이용할 수도 있는데, 다른 사람 코드 참고하면 될 듯.

## etc
1074 구현 다 된 줄 알고 commit 했는데, 백준에 막상 채점 맡겨보니 시간초과 뜸 ㅋㅋ 하루 걸려서 while문으로 바꾸고 꾸역통과함.