## info
백준 별찍기(2447) : https://www.acmicpc.net/problem/2447
백준 Z(1074) : https://www.acmicpc.net/problem/1074

## how to solve

### 2447_별찍기
미리 만들어놓은 2차원 list에 별을 채워넣는 방식임.

divide and conquer 전략처럼 n=3일 때는 바로 채우고(conquer), n>3이면 n//3을 argument로 갖는 재귀함수를 호출함.(divide)

### 1074_Z
2447과 해결법이 비슷함. 2차원 list를 미리 만들어놓고, 숫자를 채워넣었음.

n=1 -> 즉 정사각형의 size가 2*2가 될 때는 숫자를 바로 채움(conquer), n>1이면 n//2를 argument로 전달해서 재귀함수를 호출함.

숫자를 채워야 할 때는 global num 변수를 이용했음.

## etc
divide and conquer 전략의 대표적인 예시가 binary search와 merge sort, quick sort임.
저 자료구조 보면서 감 익혀도 좋을 듯 !..