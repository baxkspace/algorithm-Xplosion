#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// 각 string은 피보나치수를 거꾸로 저장한다.
// 예시: 15번째 피보나치수==610
// dp[15]="016"
string dp[10001];

int N;

void func(string& dp, string op1, string op2) {
  // 자릿수가 더 높은 string을 골라내는 작업
  // greaterOp에 해당하는 string의 자릿수가 더 큼.
  string greaterOp;
  string lowerOp;

  if (op1.length() >= op2.length()) {
    greaterOp = op1;
    lowerOp = op2;
  } else {
    greaterOp = op2;
    lowerOp = op1;
  }

  // result: op1 + op2의 연산결과를 임시저장하는 string
  // 마지막에 dp에 값을 복사한다.
  // op1+op2 결과에서 carry되는 것을 고려해서 op1, op2 중 더 큰 수의 자릿수 + 1만큼 0을 할당해 준다.
  // 예시:
  // op1 = "89";
  // op2 = "144";
  // result = "0000";
  string result = "";
  for (int i = 0; i <= greaterOp.length(); i++) result.push_back('0');

  // op1, op2의 각 자릿수 + 이전에 미리 carry된 값을 더한다.
  for (int i = 0; i < lowerOp.length(); i++) {
    int temp = ((int)greaterOp[i] - '0') + ((int)lowerOp[i] - '0') + ((int)result[i] - '0');

    // 더한 값에서 10의 자리수는 다음 자리로 carry시킴.
    result[i] = temp % 10 + '0';
    result[i + 1] = temp / 10 + '0';
  }

  // lowerOp의 자릿수가 더 적으니 남아있는 greaterOp와 carry 값을 더해서 result에 반영함.
  for (int i = lowerOp.length(); i < greaterOp.length(); i++) {
    int temp = ((int)greaterOp[i] - '0') + ((int)result[i] - '0');
    result[i] = temp % 10 + '0';
    result[i + 1] = temp / 10 + '0';
  }

  // result 뒤에 carry용으로 넣어둔 0이 남아있을 수 있다.
  // 이걸 떼어주는 작업
  while (result.back() == '0') {
    result.pop_back();
  }

  // 최종적으로 인자로 받아온 dp에 복사
  dp = result;
}

void Solve() {
  cin >> N;

  dp[0] = "0";
  dp[1] = "1";

  for (int i = 2; i <= N; i++) {
    func(dp[i], dp[i - 1], dp[i - 2]);
  }

  // 연산결과를 뒤집어서 출력한다.
  reverse(dp[N].begin(), dp[N].end());
  cout << dp[N];
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  Solve();

  return 0;
}