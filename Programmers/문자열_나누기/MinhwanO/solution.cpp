#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    int first = 1;
    int other = 0;
    for (int i = 1; i < s.length(); i++){
        if (s[0] == s[i])
            first++;
        else
            other++;
        if (first == other){
            answer++;
            first = 1;
            other = 0;
            s.erase(0, i+1);
            i = 0;
        }
    }
    if (s.length() != 0)
        answer++;
    return answer;
}