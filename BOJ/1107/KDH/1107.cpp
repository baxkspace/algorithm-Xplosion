#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int N;
bool isAble[10] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
int result;

void Input() {
  cin >> N;

  int num_of_unable;
  cin >> num_of_unable;
  for (int i = 0; i < num_of_unable; i++) {
    int unable_num;
    cin >> unable_num;
    isAble[unable_num] = 0;
  }
}

bool isPossible(int n) {
  string n_str = to_string(n);

  for (auto each : n_str) {
    int num = (int)each - '0';
    if (isAble[num] == 0) return false;
  }

  return true;
}

void Solve() {
  Input();

  // 바로 +, - 버튼으로 이동하는 게 최적일 수도 있음.
  result = abs(100 - N);

  for (int i = 0; i <= 1000000; i++) {
    if (isPossible(i)) {
      // 자릿수가 모두 고장나지 않은 경우
      result = min(result, abs(N - i) + (int)to_string(i).length());
    }
  }

  cout << result;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  Solve();

  return 0;
}