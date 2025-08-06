#include <algorithm>
#include <iostream>
#include <stack>

using namespace std;

int N;
long long cnt = 0;
stack<pair<int, int>> st;

void Solve() {
  int next;
  cin >> N;

  for (int i = 0; i < N; i++) {
    cin >> next;

    if (st.empty()) {
      // if the stack is empty, just push the next value
      st.push({next, i});
      continue;
    }

    if (st.top().first > next) {
      // if next value is lower than stack.top
      // just push into the stack
      st.push({next, i});
    } else {
      // if next value is greater than stack.top
      // pop and calculate the count until stack.top > next value (iterate)
      // cautious: be careful when the stack is empty
      while (!st.empty() && st.top().first <= next) {
        auto each = st.top();
        cnt += i - each.second - 1;
        st.pop();
      }

      st.push({next, i});
    }
  }

  // after the iteration, there can be some elements in the stack
  while (!st.empty()) {
    auto each = st.top();
    cnt += (N - 1) - each.second;
    st.pop();
  }

  cout << cnt;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  Solve();

  return 0;
}