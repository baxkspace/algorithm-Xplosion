## Info
BOJ 1074 - Z https://www.acmicpc.net/problem/1074

## How to solve
* num_lst라는 배열을 만들어 다음 최소 단위 *ex) 8 * 8 -> 4 * 4*에서의 시작 숫자와 마지막 숫자 두 개를 저장해 줌
* while문을 사용해 n을 하나씩 줄여 가며 n이 1이 나올 때까지 같은 과정 반복
* while문을 빠져나올 때 num_lst에 저장되어 있는 숫자 배열은 2 * 2 사이즈의 배열에서 첫 숫자와 끝 숫자임
* 조건문 걸어내 정답 도출

## etc
* 다 풀었는데도 찝찝함... 언짢음 배열 저장하려고 연산자를 너무 많이 쓰고 조건을 너무 많이 걸었음. while문 한 번 돌아가고 나와서 사실상 시간복잡도는 최소로 줄인 것 같은데
그거랑 별개로 연산자 과다 사용으로 인해 코드가 더러워짐 😭😭
* 오히려 별 찍기보다 이게 어려웠음 별 찍기는 같은 * string 써서 반복하면 되는데 재귀 돌아갈 때마다 숫자가 달라지는 걸 고려하려니까 재귀 쓰기가 너무 어려워져서
결국 포기하고 while문 사용... 다른 풀이도 찾아봐야겠음