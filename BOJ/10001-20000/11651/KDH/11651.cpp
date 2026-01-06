#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

vector<pair<int, int>> v(100001);
int N, tmp1, tmp2;

// sort에 사용할 비교함수
// second(y) 값으로 우선 정렬하되, second 값이 같다면 first(x) 값으로 정렬
bool comparator(pair<int, int>& a, pair<int, int>& b) {
  if (a.second == b.second) return a.first < b.first;

  return a.second < b.second;
}

// 입력
void Input() {
  cin >> N;
  for (int i = 0; i < N; i++) cin >> v[i].first >> v[i].second;
}

// 메인 함수
void Solve() {
  Input();

  sort(v.begin(), v.begin() + N, comparator);

  for (int i = 0; i < N; i++) cout << v[i].first << " " << v[i].second << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  Solve();

  return 0;
}