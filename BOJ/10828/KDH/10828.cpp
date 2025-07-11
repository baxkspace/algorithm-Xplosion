// push X: 정수 X를 스택에 넣는 연산이다.
// pop: 스택에서 가장 위에 있는 정수를 빼고, 그 수를 출력한다. 만약 스택에 들어있는 정수가 없는 경우에는 -1을 출력한다.
// size: 스택에 들어있는 정수의 개수를 출력한다.
// empty: 스택이 비어있으면 1, 아니면 0을 출력한다.
// top: 스택의 가장 위에 있는 정수를 출력한다. 만약 스택에 들어있는 정수가 없는 경우에는 -1을 출력한다.

#include <algorithm>
#include <iostream>
#include <stack>

using namespace std;

int N, element;
stack<int> st;
string command;

void print(int temp) { cout << temp << '\n'; }

void Solve() {
  cin >> N;

  for (int n = 0; n < N; n++) {
    cin >> command;

    if (command == "push") {
      cin >> element;
      st.push(element);

    } else if (command == "pop") {
      if (st.empty()) {
        print(-1);
      } else {
        print(st.top());
        st.pop();
      }

    } else if (command == "size") {
      print(st.size());

    } else if (command == "empty") {
      print(st.empty());

    } else if (command == "top") {
      if (st.empty()) {
        print(-1);
      } else {
        print(st.top());
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