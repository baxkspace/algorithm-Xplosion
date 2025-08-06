#include <algorithm>
#include <iostream>
#include <unordered_map>

using namespace std;

int T;
int N;

void Solve() {
  cin >> T;

  while (T--) {
    // 수첩1 입력
    unordered_map<int, int> um;
    cin >> N;

    for (int i = 0; i < N; i++) {
      int temp;
      cin >> temp;
      um.insert({temp, temp});
    }

    // 수첩2
    cin >> N;

    for (int i = 0; i < N; i++) {
      int temp2;
      cin >> temp2;

      if (um.find(temp2) != um.end()) {
        cout << 1 << ' ';
      } else {
        cout << 0 << ' ';
      }
    }
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  Solve();

  return 0;
}