#include <algorithm>
#include <iostream>
#include <stack>
#include <string>
using namespace std;

int N, result = 0;
string str;
stack<char> st;

void Solve() {
  // input
  cin >> N;

  while (N--) {
    cin >> str;

    // 단어를 한 줄씩 입력받고, 한 글자씩 읽어봄
    for (char each : str) {
      // 스택 비어있으면 무조건 push
      if (st.empty()) {
        st.push(each);
      } else {
        // st.top()과 다음 글자가 일치하면, 짝지어서 없애주기(pop)
        if (st.top() == each) {
          st.pop();
        } else {
          // st.top()과 다음 글자가 다르다면, push
          st.push(each);
        }
      }
    }

    // 모든 글자를 다 순회한 뒤에 스택에 아무 글자도 남아있지 않다면
    // 모든 글자가 다 올바르게 짝지어졌다는 의미이므로 좋은 단어임.
    if (st.empty()) {
      result += 1;
    }

    // 좋은 단어가 아니었을 때에는 스택에 char가 남아있으니, 스택을 비워주는 작업
    while (!st.empty()) st.pop();
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