## Info
Programmers - 택배 배달과 수거하기 https://school.programmers.co.kr/learn/courses/30/lessons/150369#

## How to solve
* 끝에서부터 cap이 될 때까지 더해주면서 인덱스를 내린다. 마지막 인덱스 + 1부터 배열의 끝까지 삭제하고 다시 반복한다.
* answer에는 거리가 들어가야하므로 deliveries와 pickups 중 더 멀리 간 곳을 기준으로 거리를 두번 더한다.

## etc
* 자꾸 segmentation fault가 나서 스트레스를 받았지만.. 조건 몇번 바꾸니까 해결했다. 어려워보이지만 그렇게 어렵지는 않았다.
* 그리디 알고리즘 !!