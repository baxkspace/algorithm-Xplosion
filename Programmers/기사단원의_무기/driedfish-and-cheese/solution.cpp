#include <string>
#include <vector>

using namespace std;

int solution(int number, int limit, int power) {
    int answer = 0;
	int cnt = 1;
vector <int>num;
	for (int j = 1; j <= number; j++) {
		for (int i = 1; i <= j/2; i++) {
			if (j % i == 0) {
				cnt++;
			}
		}
		num.push_back(cnt);
		cnt = 1;
	}
	for (int i = 0; i < num.size(); i++) {
		if (num[i] > limit) {
			num[i] = power;
		}
		answer += num[i];
	}
    return answer;
}