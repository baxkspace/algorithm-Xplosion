## Info
Programmers - 조이스틱 https://school.programmers.co.kr/learn/courses/30/lessons/42860

## How to solve
* 상하이동
    * 아스키코드를 활용해서 name[i] - 'A'와 'Z' - name[i] + 1 을 비교하여 더 작은 수를 얻었다.
* 좌우이동
    * 처음 위치에서 오른쪽으로 가는 거랑 왼쪽으로 가는 거 두개로 나누었다.
    * 배열에 'A'가 아닌 문자의 위치를 차례대로 집어넣었다.
    * 각 단계에서 왼쪽(배열의 마지막 요소), 오른쪽(배열의 첫번째 요소) 중 더 가까운 것을 찾아서 이동하며 count를 더했다.
* 종료조건
    * name의 길이만큼 'A'로만 이루어진 문자열이 각 단계에서 name[i]와 같아지면서 결국 name과 완전히 같아졌을 경우.
## etc
* 상하이동은 진짜 빨리 해냈는데 좌우이동이 힘들었다. 상하이동도 처음에는 해시맵에다가 알파벳이랑 번호 다 집어넣고 시도했었는데 나중 가서 아스키코드로 바꿨다. 좌우이동은 처음엔 bfs로 모든 경우의 수를 찾아내려고 했었는데 해보니까 안되더라고?! 그래서 고민하다가 각 단계마다 더 가까운거 찾으면 되겠다 ! 유레카 ! 했었다. 근데 또 문제가 뭐냐면 처음 시작할 때 오른쪽으로 가는 게 처음엔 더 가깝더라도 전체 count를 세어 보면 왼쪽으로 가는 게 더 작은 경우가 있었다. 그래서 두 개로 나눠서 해결하였다 !!! 오랜만에 오랫동안 풀어서 재미있긴 했는데 힘들었다.
