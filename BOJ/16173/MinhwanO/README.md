## Info
BOJ 16173 - 점프왕 쩰리 (Small) https://www.acmicpc.net/problem/16173

## How to solve
* bfs 이용
    1. q의 front 가져오고 pop
    2. 방문 표시
    3. 그 좌표의 수만큼 오른쪽, 아래쪽 너머의 위치가 사각형 안에 있는지 확인
    4. 안에 있다면, 방문 했는지 확인
    5. 안했으면 q에 push
    6. 1~5를 q가 빌 때까지 반복
    7. 끝 점을 방문했는지 확인하고, 결과에 따라서 출력

## etc