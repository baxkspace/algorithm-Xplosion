#include <algorithm>
#include <iostream>
#include <stack>

using namespace std;

int N, num;
long long result = 0;
stack<int> st;

void Solve() {
  cin >> N;

  // stack up
  while (N--) {
    cin >> num;

    if (num == 0) {
      st.pop();
      continue;
    }

    st.push(num);
  }

  // calculate a result
  while (!st.empty()) {
    result += st.top();
    st.pop();
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