#include <algorithm>
#include <iostream>

using namespace std;

int N, max_len = 0;
int arr[100000];

void Input() {
  cin >> N;

  for (int i = 0; i < N; i++) cin >> arr[i];
}

void Solve() {
  Input();

  // only check increasing one
  int i = 0, j = 0;
  for (i = 0; i < N; i++) {
    while (j + 1 < N && arr[j] <= arr[j + 1]) {
      j += 1;
    }

    max_len = max(max_len, j - i + 1);
    i = j;
    j = i + 1;
  }

  // only check decreasing one
  i = 0, j = 0;
  for (i = 0; i < N; i++) {
    while (j + 1 < N && arr[j] >= arr[j + 1]) {
      j += 1;
    }

    max_len = max(max_len, j - i + 1);
    i = j;
    j = i + 1;
  }

  cout << max_len;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  Solve();

  return 0;
}