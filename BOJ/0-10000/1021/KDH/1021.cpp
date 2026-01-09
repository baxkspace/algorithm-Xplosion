#include <algorithm>
#include <deque>
#include <iostream>
using namespace std;

int N, M, result = 0;
// 회전하는 큐를 구현하기 위한 자료구조: deque(앞, 뒤 insert/pop이 모두 O(1))
deque<int> dq;
// 순서대로 추출해야 하는 target numbers를 저장하는 배열
int targets[52] = {0};

void Input() {
  cin >> N >> M;

  for (int i = 1; i <= N; i++) dq.push_back(i);

  for (int i = 0; i < M; i++) cin >> targets[i];
}

int rotate_counter_clockwise(int target) {
  // target 값을 찾을 때까지 deque를 반시계 방향으로 회전시키는 함수
  // target 값을 찾을 때까지 deque를 몇 번 회전시켰는지, 그 횟수를 리턴함.
  // 물론 항상 반시계 방향으로 회전시키는 게 최적이 아닐 수도 있음.
  // target 값을 찾기 위한 반시계 방향 회전 횟수 + 시계 방향 회전 횟수 = 전체 deque 원소의 수와 같음.
  // 반시계 방향으로 target 값을 찾기 위한 횟수만 계산하고, 시계 방향 회전 횟수와 비교해서 최소값만 선택함.
  int cnt = 0;

  while (dq.front() != target) {
    dq.push_back(dq.front());
    dq.pop_front();
    cnt += 1;
  }

  // cnt: target을 찾기 위한 반시계 방향 회전 횟수
  // deque.size()-cnt: target을 찾기 위해 시계 방향으로 회전했다면 걸리는 회전 횟수
  // 시계 방향/반시계 방향 중 더 적은 횟수를 선택함.
  int cnt_result = min(cnt, (int)dq.size() - cnt);
  dq.pop_front();

  return cnt_result;
}

void Solve() {
  Input();

  for (int i = 0; i < M; i++) result += rotate_counter_clockwise(targets[i]);
  cout << result;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  Solve();

  return 0;
}