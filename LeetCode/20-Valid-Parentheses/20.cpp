#include <iostream>
#include <stack>
using namespace std;

class Solution {
 public:
  bool isValid(string s) {
    stack<char> st;

    for (auto each : s) {
      if (each == '(' || each == '[' || each == '{') {
        st.push(each);
      } else if (each == ')') {
        if (!st.empty() && st.top() == '(')
          st.pop();
        else
          return false;
      } else if (each == ']') {
        if (!st.empty() && st.top() == '[')
          st.pop();
        else
          return false;
      } else if (each == '}') {
        if (!st.empty() && st.top() == '{')
          st.pop();
        else
          return false;
      }
    }

    if (st.size() != 0) return false;

    return true;
  }
};